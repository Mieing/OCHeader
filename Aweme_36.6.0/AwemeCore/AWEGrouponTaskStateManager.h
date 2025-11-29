@class NSDictionary, NSMutableDictionary;

@interface AWEGrouponTaskStateManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *componentStateMap;
@property (nonatomic) long long coldStartShowCount;
@property (readonly, copy, nonatomic) NSDictionary *componentStateDict;

- (void)onShowComponentWithType:(id)a0 componentID:(id)a1 coldStartLimited:(BOOL)a2;
- (void)onHideComponentWithType:(id)a0 componentID:(id)a1;
- (long long)componentShowStateWithType:(id)a0 componentID:(id)a1;
- (BOOL)isColdStartShowLimited;
- (long long)coldLaunchFrequency;
- (BOOL)requestComponentShowWithType:(id)a0 componentID:(id)a1 coldStartLimited:(BOOL)a2;
- (BOOL)canShowComponentWithType:(id)a0 componentID:(id)a1;
- (id)getSupportType;
- (BOOL)canShowComponentWithType:(id)a0 componentID:(id)a1 requestShow:(BOOL)a2;
- (id)getAvoidRuleByType:(id)a0;
- (void).cxx_destruct;

@end
