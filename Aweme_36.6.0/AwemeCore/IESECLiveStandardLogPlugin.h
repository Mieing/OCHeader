@class NSString, IESECLiveContext;

@interface IESECLiveStandardLogPlugin : NSObject <IESECLiveEventPlugin>

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initPluginWithLiveContext:(id)a0;
- (void)receive:(id)a0;
- (id)consumedEventsSet;
- (BOOL)dispatchInBackgroundThread;
- (void)destroyPlugin;
- (void).cxx_destruct;

@end
