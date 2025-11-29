@class IESLiveGuideActivityBonusView, NSString, IESLiveGuideToolBarItem, CreateInfoResponse_CreateInfo;
@protocol IESLiveURLSchemaHandler;

@interface IESLiveGuideActivityFragment : IESLiveGuideComponent <IESLiveGuideActions, IESLiveGuideActivityRouter>

@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaHandler;
@property (retain, nonatomic) CreateInfoResponse_CreateInfo *openliveModel;
@property (retain, nonatomic) IESLiveGuideToolBarItem *activityZoneToolBarItem;
@property (retain, nonatomic) IESLiveGuideActivityBonusView *bonusLabel;
@property (copy, nonatomic) NSString *lastBonusLabelId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentMount;
- (BOOL)shouldShowActivityBubble;
- (void)openLiveModelDidUpdate:(id)a0;
- (void)p_createActivityZoneIcon;
- (void)showBonusView;
- (void)trackBonusViewShow;
- (void)showIconWebView;
- (void)p_showBubbleIfNeeded;
- (void).cxx_destruct;

@end
