@class NSString, IESECLiveContext, YYMemoryCache, IESECHybridParamsVerifyHelper;

@interface IESECLiveVerifyPlugin : NSObject <IESECLiveEventPlugin, IESECLiveVerifyPlugin>

@property (retain, nonatomic) YYMemoryCache *dataCache;
@property (copy, nonatomic) NSString *pageBtmID;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECHybridParamsVerifyHelper *verifyHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getAllData;
- (void)cleanAllData;
- (id)initWithLiveContext:(id)a0;
- (id)initPluginWithLiveContext:(id)a0;
- (void)receive:(id)a0;
- (id)consumedEventsSet;
- (BOOL)dispatchInBackgroundThread;
- (void)destroyPlugin;
- (id)buildJumpDestinationStr:(id)a0;
- (void).cxx_destruct;

@end
