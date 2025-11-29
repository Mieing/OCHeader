@class NSString;

@interface AWEIMStreakPetSLOComponent : AWEIMComponentBase

@property (copy, nonatomic) NSString *petElfPendantShowStage;
@property (copy, nonatomic) NSString *achievePageShowStage;
@property (nonatomic) BOOL petElfPendantSuccessShow;
@property (nonatomic) BOOL achievePageSuccessShow;
@property (nonatomic) BOOL pendantHasTracked;
@property (nonatomic) BOOL achievePageHasTracked;

+ (id)getReportConfigValue;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_willDealloc;
- (void)componentDidMounted:(id)a0;
- (void)onAppWillEnterForeground;
- (void)requestServerIfNeeded;
- (void)onPendantShow:(id)a0;
- (void)onAchievePageShow:(id)a0;
- (void)onAppEnterBackground;
- (id)getConversation;
- (void)petWidgetTracking:(id)a0;
- (void)achievePageTracking:(id)a0;
- (void).cxx_destruct;

@end
