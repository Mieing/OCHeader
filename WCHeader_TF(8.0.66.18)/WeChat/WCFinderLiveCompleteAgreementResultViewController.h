@class FinderJumpInfo, NSString, MMFinderLiveTaskId, UIView, UIImage, UIButton;
@protocol WCFinderLiveCompleteAgreementResultViewControllerDelegate;

@interface WCFinderLiveCompleteAgreementResultViewController : MMAcceptAgreementBaseViewController <MMAcceptAgreementCommonHeadViewDelegate> {
    UIButton *m_actionBtn;
    NSString *m_headTitle;
    NSString *m_headContent;
    NSString *m_headContentWithLink;
}

@property (readonly, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *extJumpActionButton;
@property (retain, nonatomic) UIImage *m_logoSVGImage;
@property (retain, nonatomic) NSString *m_actionBtnStr;
@property (nonatomic) BOOL m_isWeakActionBtn;
@property (retain, nonatomic) FinderJumpInfo *extJumpAction;
@property (weak, nonatomic) id<WCFinderLiveCompleteAgreementResultViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHeadTitle:(id)a0 headContent:(id)a1 liveTaskId:(id)a2;
- (id)initWithHeadTitle:(id)a0 headContentWithLink:(id)a1 liveTaskId:(id)a2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)layoutView;
- (void)createAndLayoutActionButtons;
- (void)createActionBtnsIfNeed;
- (void)layoutActionButtons;
- (BOOL)shouldShowExtJumpActinoButton;
- (void)doExtJumpAction;
- (void)layoutCommonHeadView;
- (void)doAction;
- (void)onHeadContentLinkClicked:(id)a0;
- (void)setupBlurBackground;
- (BOOL)useTransparentNavibar;
- (id)liveTask;
- (void).cxx_destruct;

@end
