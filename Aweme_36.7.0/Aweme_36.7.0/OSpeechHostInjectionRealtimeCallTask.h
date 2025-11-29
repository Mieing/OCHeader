@class NSString;
@protocol OSpeechHostInjectionCallback;

@interface OSpeechHostInjectionRealtimeCallTask : OSpeechRealtimeCallTask {
    void *nativeHandle;
}

@property (retain, nonatomic) id<OSpeechHostInjectionCallback> userCallback_;
@property (copy, nonatomic) NSString *businessInfo_;
@property (copy, nonatomic) NSString *dumpPath_;

- (id)initWithParam:(id)a0;
- (int)initNative;
- (int)sendHostInjectionUplinkData:(id)a0;
- (int)setSpeechLinkLayer:(id)a0;
- (int)setLocalParam:(long long)a0 param:(id)a1;
- (void).cxx_destruct;
- (int)stop;
- (int)destroy;
- (int)start;

@end
