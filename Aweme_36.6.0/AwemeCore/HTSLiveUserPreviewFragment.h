@class NSString, IESLiveUserCardViewModel, IESLiveMoreToolsSettingItem;

@interface HTSLiveUserPreviewFragment : IESLiveRoomComponent <IESLiveAudienceMoreToolsAction>

@property (retain, nonatomic) IESLiveUserCardViewModel *userCardViewModel;
@property (retain, nonatomic) IESLiveMoreToolsSettingItem *userRelationSwitchItem;
@property (nonatomic) BOOL abTest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)userSettingInfoFetched:(id)a0 error:(id)a1;
- (void)addUserCardPSActionSheetItem;
- (void)addUserCardPSFloatSheetItem;
- (void)addCommentReportPSFloatSheetItem;
- (void)removeAudienceUserRelationMoreToolsSettingItem;
- (void)addAudienceUserRelationMoreToolsSettingItem:(BOOL)a0;
- (void)setupAudienceUserRelationSwitchItem:(BOOL)a0;
- (void)hideSmallWindow:(id)a0;
- (void).cxx_destruct;
- (void)addObservers;

@end
