@interface WeChat.MagicBrushFlutterPlugin : NSObject <MMFlutterPlugin, MagicBrushRequest> {
    void /* unknown type, empty encoding */ flutterApi;
    void /* unknown type, empty encoding */ registry;
    void /* unknown type, empty encoding */ textureMap;
    void /* unknown type, empty encoding */ weakEngine;
}

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (id)dispatchTouchEventViewId:(id)a0 event:(id)a1 error:(id *)a2;
- (id)init;
- (void).cxx_destruct;

@end
