@protocol OSpeechLinkLayerCallback;

@interface OSpeechLinkLayer : NSObject {
    void *_handle;
}

@property (retain, nonatomic) id<OSpeechLinkLayerCallback> userCallback;

- (id)initWithParam:(id)a0;
- (int)initNative;
- (int)processDownlinkData:(id)a0;
- (long long)getNativeHandle;
- (void).cxx_destruct;
- (void)destroy;

@end
