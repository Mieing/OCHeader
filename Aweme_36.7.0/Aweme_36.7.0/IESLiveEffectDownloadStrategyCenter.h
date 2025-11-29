@class NSDictionary, NSMutableDictionary;
@protocol IESLiveGiftAiService;

@interface IESLiveEffectDownloadStrategyCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *fetchMomentTrigerTimeMap;
@property (retain, nonatomic) NSDictionary *fetchMomentTrigerFrequency;
@property (nonatomic) long long lowDiskThreshInMb;
@property (retain, nonatomic) id<IESLiveGiftAiService> aiService;
@property (nonatomic) BOOL enableGiftPanelReborn;

- (void)didSetAttachingDIContext;
- (void)runDownloadStrategyTask:(id)a0 completion:(id /* block */)a1;
- (void)registerMessageHandler;
- (BOOL)enableRunTaskWithFetchMomentType:(long long)a0;
- (void)runTaskWithParams:(id)a0 completion:(id /* block */)a1;
- (void)handleDownloadMessage:(id)a0;
- (void)handleStopDownloadMessage:(id)a0;
- (void)removeMessageHandler;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
