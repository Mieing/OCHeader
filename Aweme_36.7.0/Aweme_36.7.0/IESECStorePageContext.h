@class IESECShopEventRecorder;

@interface IESECStorePageContext : IESECRelationPageContext

@property (retain, nonatomic) IESECShopEventRecorder *eventRecorder;
@property (nonatomic) unsigned long long headerType;
@property (nonatomic) unsigned long long themeType;
@property (nonatomic) unsigned long long selectedTabType;
@property (nonatomic) unsigned long long apiStatus;
@property (nonatomic) BOOL hideBottomTabBar;

- (void)setupTrackerWithBusinessParams:(id)a0;
- (void)recordScrollOffset:(double)a0;
- (void)recordEvent:(id)a0 params:(id)a1;
- (id)userBehaviorReportParams;
- (void).cxx_destruct;
- (id)init;

@end
