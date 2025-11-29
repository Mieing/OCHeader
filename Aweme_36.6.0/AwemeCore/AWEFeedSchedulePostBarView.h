@class UIViewController, AWEFeedSchedulePostReviewViewModel, AWEFeedSchedulePostBarController, AWEAwemeModel, NSString, AWEFeedBottomBarVideoSchedulePostEntranceView;
@protocol AFDVideoPrivacyButtonControllerProtocol;

@interface AWEFeedSchedulePostBarView : UIView <DUXBasicSheetDelegate, DUXSheetDelegate>

@property (retain, nonatomic) UIViewController *contextViewController;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEFeedBottomBarVideoSchedulePostEntranceView *entranceView;
@property (retain, nonatomic) id<AFDVideoPrivacyButtonControllerProtocol> privacyButtonController;
@property (retain, nonatomic) AWEFeedSchedulePostReviewViewModel *reviewViewModel;
@property (weak, nonatomic) AWEFeedSchedulePostBarController *barController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetWillDismiss:(id)a0;
- (void)updateWithAwemeModel:(id)a0;
- (BOOL)isReeditButtonShow:(id)a0;
- (void)trackPopupClick:(id)a0;
- (void)reeditAction;
- (void)cancelSchedulePostAction;
- (void)updateReviewViewModelWithAwemeModel:(id)a0;
- (void)showReviewViewController;
- (void)trackPopupShow:(id)a0;
- (void)entranceViewDidTap;
- (void)duxBasicSheet:(id)a0 navigationControllerType:(long long)a1 willShowViewController:(id)a2 animated:(BOOL)a3;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
