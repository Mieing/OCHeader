@class NSString, NSMutableDictionary, JSCTarget, JSCScreencastSession;

@interface JSCProtocolAdapter : NSObject {
    JSCTarget *_target;
    NSMutableDictionary *_styleMap;
    BOOL _isEvaluating;
    NSString *_lastScriptEval;
    int _lastNodeId;
    int _lastPageExecutionContextId;
    id _lastReqID;
    id _lastConsoleMessage;
    JSCScreencastSession *_screencastSession;
}

- (id)initWithTarget:(id)a0;
- (void)initMessageFilters;
- (id)onDomGetDocument;
- (id)onCssSetStyleTexts:(id)a0;
- (id)onCssGetMatchedStylesForNode:(id)a0;
- (id)onCssGetBackgroundColors:(id)a0;
- (id)onCssAddRule:(id)a0;
- (id)onCssGetPlatformFontsForNode:(id)a0;
- (id)onCssGetMatchedStylesForNodeResult:(id)a0;
- (id)onPageStartScreencast:(id)a0;
- (id)onPageStopScreencast:(id)a0;
- (id)onPageScreencastFrameAck:(id)a0;
- (id)onPageGetNavigationHistory:(id)a0;
- (id)onDomEnable:(id)a0;
- (id)onDomSetInspectMode:(id)a0;
- (id)onDomPushNodesByBackendIdsToFrontend:(id)a0;
- (id)onDomGetBoxModel:(id)a0;
- (id)onDomGetNodeForLocation:(id)a0;
- (id)onDOMDebuggerGetEventListeners:(id)a0;
- (id)onDebuggerCanSetScriptSource:(id)a0;
- (id)onDebuggerSetBlackboxPatterns:(id)a0;
- (id)onDebuggerSetAsyncCallStackDepth:(id)a0;
- (id)onDebuggerEnable:(id)a0;
- (id)onDebuggerScriptParsed:(id)a0;
- (id)onEmulationCanEmulate:(id)a0;
- (id)onInputEmulateTouchFromMouseEvent:(id)a0;
- (id)onConsoleMessageAdded:(id)a0;
- (id)onConsoleMessageRepeatCountUpdated:(id)a0;
- (id)onNetworkCanEmulateNetworkConditions:(id)a0;
- (id)onRuntimeEnable:(id)a0;
- (id)onRuntimeCompileScript:(id)a0;
- (id)onRuntimeExecutionContextCreated:(id)a0;
- (id)onRuntimeEvaluate:(id)a0;
- (id)onRuntimeGetProperties:(id)a0;
- (id)onInspectorInspect:(id)a0;
- (id)onHeapProfilerTakeHeapSnapshot:(id)a0;
- (id)onProfilerStop:(id)a0;
- (void)removeProfilesDeadLoop:(id)a0 nodes:(id)a1;
- (id)onScriptProfilerTrackingComplete:(id)a0;
- (void).cxx_destruct;

@end
