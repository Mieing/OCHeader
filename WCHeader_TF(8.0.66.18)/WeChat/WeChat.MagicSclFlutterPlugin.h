@interface WeChat.MagicSclFlutterPlugin : NSObject <MMFlutterPlugin, MagicSclRequest, MagicSclBizHostApi> {
    void /* unknown type, empty encoding */ handlers;
    void /* unknown type, empty encoding */ rootIdToHandlerName;
    void /* unknown type, empty encoding */ weakEngine;
}

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (id)createFrameSetRootBizName:(id)a0 path:(id)a1 query:(id)a2 error:(id *)a3;
- (void)destroyFrameSetRootRootId:(id)a0 error:(id *)a1;
- (void)pauseFrameSetRootRootId:(id)a0 error:(id *)a1;
- (void)resumeFrameSetRootRootId:(id)a0 error:(id *)a1;
- (void)redrawFrameSetRootRootId:(id)a0 error:(id *)a1;
- (void)changeFrameSetDataRootId:(id)a0 data:(id)a1 extInfo:(id)a2 error:(id *)a3;
- (void)preInitFrameSetRootId:(id)a0 name:(id)a1 data:(id)a2 extInfo:(id)a3 completion:(id /* block */)a4;
- (id)createFrameSetRootId:(id)a0 name:(id)a1 viewId:(long long)a2 error:(id *)a3;
- (void)destroyFrameSetRootId:(id)a0 frameSetId:(id)a1 error:(id *)a2;
- (void)attachFrameSetRootId:(id)a0 frameSetId:(id)a1 extra:(id)a2 error:(id *)a3;
- (void)detachFrameSetRootId:(id)a0 frameSetId:(id)a1 error:(id *)a2;
- (void)redrawFrameSetRootId:(id)a0 frameSetId:(id)a1 error:(id *)a2;
- (void)resizeFrameSetRootId:(id)a0 frameSetId:(id)a1 width:(double)a2 height:(double)a3 error:(id *)a4;
- (void)scrollFrameSetRootId:(id)a0 frameSetId:(id)a1 listViewPortHeight:(double)a2 itemOffset:(double)a3 error:(id *)a4;
- (void)clickFrameSetRootId:(id)a0 frameSetId:(id)a1 magicbrushViewId:(id)a2 error:(id *)a3;
- (id)getFrameSetCoverPathRootId:(id)a0 frameSetId:(id)a1 error:(id *)a2;
- (void)invokeBizName:(id)a0 apiName:(id)a1 data:(id)a2 completion:(id /* block */)a3;
- (id)init;
- (void).cxx_destruct;

@end
