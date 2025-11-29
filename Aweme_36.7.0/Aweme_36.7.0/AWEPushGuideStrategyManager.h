@class NSDictionary, NSMutableDictionary, NSString;

@interface AWEPushGuideStrategyManager : NSObject <AWEUGPushGuideLifeCycleProtocol, AWEUGPushGuideByPitayaExecutorDelegate, AWEUGServiceStrategyExecutorDelegate>

@property (retain, nonatomic) NSMutableDictionary *pushGuideActionBlocks;
@property (retain, nonatomic) NSMutableDictionary *pushGuideShowBlocks;
@property (retain, nonatomic) NSDictionary *originTrackParams;
@property (copy, nonatomic) NSString *currentEventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstanced;

- (void)showPitayaPushGuide:(id)a0;
- (void)pushGuideShowFail:(id)a0;
- (void)pushGuideShowSuccess:(id)a0;
- (void)pushGuideActionSettingsBack:(id)a0 isOpen:(BOOL)a1;
- (void)registerPushGuideActionBlock:(id /* block */)a0 scene:(id)a1;
- (void)registerPushGuideShowBlock:(id /* block */)a0 scene:(id)a1;
- (void)excuteWithParam:(id)a0;
- (void)registerUGServiceStrategy;
- (void).cxx_destruct;
- (id)init;

@end
