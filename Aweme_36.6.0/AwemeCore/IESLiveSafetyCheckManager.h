@class NSString;
@protocol IESLiveDebugService, IESLiveCustomConfig, IESLiveMonitor;

@interface IESLiveSafetyCheckManager : NSObject <IESLiveSafetyCheckManager>

@property (retain, nonatomic) id<IESLiveCustomConfig> customConfig;
@property (retain, nonatomic) id<IESLiveDebugService> debugService;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)safeCheckManager;

- (long long)willForbidEnterliveSafetyRequirement:(id)a0;
- (long long)willForbidEnterliveSafetyRequirement:(id)a0 withParams:(id)a1;
- (long long)willForbidOpenLiveSafetyRequirement:(id)a0;
- (BOOL)didForbidEnterliveSafetyRequirement:(id)a0 withParams:(id)a1;
- (BOOL)didForbidOpenLiveSafetyRequirementWithParams:(id)a0;
- (BOOL)willForbidShareSafetyRequirement:(id)a0;
- (BOOL)didForbidShareSafetyRequirement:(id)a0 withParams:(id)a1;
- (BOOL)anchorIsPrivate:(id)a0;
- (void).cxx_destruct;

@end
