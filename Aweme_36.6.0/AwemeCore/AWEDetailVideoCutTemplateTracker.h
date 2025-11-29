@class AWEDetailVideoCutTemplateViewModel, NSString;

@interface AWEDetailVideoCutTemplateTracker : NSObject <AWEDetailTrackerService>

@property (retain, nonatomic) AWEDetailVideoCutTemplateViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackActivityEntranceShowWithModel:(id)a0;

- (void)trackEnterPersonalDetailWithModel:(id)a0;
- (void)trackClickLinkWithModel:(id)a0;
- (void)trackFeedEnterWithModel:(id)a0;
- (void)trackDetailPageClientShowWithModel:(id)a0;
- (void)trackClickedShootButton;
- (void)trackFavoriteIconShow;
- (void)trackFavoriteActionClickedWithActionType:(BOOL)a0;
- (void)trackTemplateCollectStateWithTemplateID:(id)a0 templateType:(long long)a1 isCollectAction:(BOOL)a2 Error:(id)a3;
- (void)trackDetailPageExitWithMask;
- (void)trackDetailPagePullUp;
- (void)trackDetailPagePullDown;
- (id)initWithStateContext:(id)a0;
- (void)trackActionButtonClickWithType:(id)a0;
- (void)trackEnterTemplateDetail;
- (void)trackVideocutDetailPageShow;
- (void).cxx_destruct;

@end
