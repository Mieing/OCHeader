@class NSString, NSMutableDictionary;
@protocol IESLiveNativeAppPluginContext;

@interface IESLiveNativeAppDurationPlugin : NSObject <IESLiveNativeAppDurationPlugin, IESLiveNativeAppFragmentLifeCycle, IESLiveNativeAppPluginDataStreamHandler> {
    id<IESLiveNativeAppPluginContext> _pluginContext;
}

@property (copy, nonatomic) id /* block */ frameDropCallback;
@property (retain, nonatomic) NSMutableDictionary *durationCostDict;
@property (nonatomic) double createTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableSceneTypes;

- (id)initWithDIContext:(id)a0 pluginContext:(id)a1;
- (void)updateRecord:(id)a0 customStorageKey:(id)a1 stage:(id)a2 extra:(id)a3;
- (void)updateRecord:(id)a0 stage:(id)a1 extra:(id)a2;
- (void)openDropFpsMonitorWithScene:(id)a0;
- (void)closeDropFpsMonitor;
- (void)pluginBindServices;
- (void)pluginDidCreate;
- (void)tractEvent:(id)a0 customParams:(id)a1 srcParams:(id)a2;
- (BOOL)isValidWithEvent:(id)a0 customStorageKey:(id)a1 stage:(id)a2 extra:(id)a3;
- (void)addTimeStamp:(id)a0 state:(id)a1 extra:(id)a2;
- (void).cxx_destruct;
- (id)pluginContext;

@end
