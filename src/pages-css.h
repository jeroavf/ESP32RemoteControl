#include "pgmspace.h"
const char css[] PROGMEM = 
"body{user-select:none;overflow:hidden;background-color:#DDD;font-family:'Roboto'}label{margin-bottom:7px;display:inline-block}.buttons-widget{fill:#888}.button-vertical{width:100%;height:50%}.button-horizontal{width:50%;height:100%}.widget-canvas{width:100vw;height:100vh}.button{width:40px;height:40px;background-color:#aaa;fill:#fff;display:flex;align-items:center;justify-content:center;border-radius:50%;z-index:100;box-shadow:0 3px 6px rgba(0,0,0,0.16),0 3px 6px rgba(0,0,0,0.23);cursor:pointer}.edit-button{margin-bottom:5px;background-color:#0ebaab}.toolbar-button{margin-bottom:5px;background-color:#0ebaab}.connect-toolbar{z-index:100;position:fixed;top:0;right:45px;margin:5px;display:flex;flex-direction:column}.connected{background-color:#0c0}.connection-error{background-color:#c00}.toolbar{z-index:100;position:fixed;top:0;right:0;margin:5px;display:flex;flex-direction:column}.edit-active-button{background-color:#067067;color:#FFF;box-shadow:none}.edit-widget-button{width:40px;height:40px;top:calc(50% - 60px);left:calc(50% - 20px);position:relative;background-color:lightgrey;color:#000;display:flex;align-items:center;justify-content:center;border-radius:50%;cursor:pointer;margin-bottom:5px;touch-action:auto}.drag-widget-button{width:40px;height:40px;top:calc(50% - 60px);left:calc(50% - 20px);position:relative;color:#000;display:flex;align-items:center;justify-content:center;cursor:pointer}.widget{width:200px;height:300px;top:50px;position:fixed;background-color:#FFF;align-items:stretch;user-select:none;box-shadow:0 3px 6px rgba(0,0,0,0.16),0 3px 6px rgba(0,0,0,0.23);box-sizing:border-box;touch-action:none}.edit-widget-container{position:absolute;top:0;height:100%;width:100%;touch-action:none}.modal{display:none;position:fixed;z-index:101;padding-top:10%;left:0;top:0;width:100%;height:100%;overflow:auto;background-color:#000;background-color:rgba(0,0,0,0.4)}.modal-content{position:relative;background-color:#fefefe;margin:auto;top:0;padding:20px;border:1px solid #888;width:80%;animation-name:animatetop;animation-duration:.4s}@keyframes animatetop{from{top:-300px;opacity:0}to{top:0;opacity:1}}.close{color:#fff;float:right;font-size:28px;font-weight:bold;cursor:pointer}.slider{-webkit-appearance:none;width:80%;height:20px;border-radius:5px;background:#d3d3d3;outline:0;-webkit-transition:.2s;transition:opacity .2s}.slider::-webkit-slider-thumb{-webkit-appearance:none;appearance:none;width:34px;height:34px;border-radius:50%;background:#0ebaab;cursor:pointer}.switch{position:relative;display:inline-block;width:60px;height:34px}.switch input{display:none}.cbslider{position:absolute;cursor:pointer;top:0;left:0;right:0;bottom:0;background-color:#ccc;-webkit-transition:.4s;transition:.4s}.cbslider:before{position:absolute;content:\"\";height:26px;width:26px;left:4px;bottom:4px;background-color:white;-webkit-transition:.4s;transition:.4s}input:checked+.cbslider{background-color:#0ebaab}input:focus+.cbslider{box-shadow:0 0 1px #0ebaab}input:checked+.cbslider:before{-webkit-transform:translateX(26px);-ms-transform:translateX(26px);transform:translateX(26px)}.cbslider.round{border-radius:34px}.cbslider.round:before{border-radius:50%}.radio-toolbar input[type=\"radio\"]{display:none;margin:0}.radio-toolbar label{display:inline-block;background-color:#ccc;padding:4px 11px;margin:3px;cursor:pointer}.radio-toolbar input[type=\"radio\"]:checked+label{background-color:#0ebaab}";
