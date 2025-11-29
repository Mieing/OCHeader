@class NSString, IESECLiveContext;

@interface IESECLivePerfPlugin : NSObject <IESECLiveEventPlugin>

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveContext:(id)a0;
- (id)initPluginWithLiveContext:(id)a0;
- (void)receive:(id)a0;
- (id)consumedEventsSet;
- (BOOL)dispatchInBackgroundThread;
- (void)destroyPlugin;
- (void)reportLivePerfWithContext:(id)a0 perfKey:(id)a1 value:(BOOL)a2;
- (void).cxx_destruct;

@end
