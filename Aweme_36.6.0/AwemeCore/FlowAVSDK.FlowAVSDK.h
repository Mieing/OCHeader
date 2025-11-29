@class _TtC9FlowAVSDK9FlowAVSDK, _TtC9FlowAVSDK12FlowAVConfig;

@interface FlowAVSDK.FlowAVSDK : NSObject

@property (class, nonatomic, readonly) _TtC9FlowAVSDK9FlowAVSDK *shared;

@property (nonatomic, retain) _TtC9FlowAVSDK12FlowAVConfig *config;

- (void)preload:(id)a0;
- (void)registerWithConfig:(id)a0;
- (id)createSessionWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
