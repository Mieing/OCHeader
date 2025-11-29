@class NSString;

@interface AWEWeeklyRecommendManager : NSObject <AWEMVWeeklyRecommendProtocol>

@property (nonatomic) BOOL isShowingWeeklyExplainPanel;
@property (nonatomic) BOOL isClickWeeklyExplainPanelAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)panelConfig;
+ (id)sharedInstance;

- (BOOL)enablePreventVideoPauseByWeeklyExplainPanel;
- (BOOL)enbaleLabelClick;
- (BOOL)enableExplainPanelPreload;

@end
