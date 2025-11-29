@class MMUILabel, NSString, UIImage, MMAcceptAgreementCommonHeadView, UIButton;
@protocol MMAcceptAgreementResultViewControllerDelegate;

@interface MMAcceptAgreementResultViewController : MMAcceptAgreementBaseViewController <MMAcceptAgreementCommonHeadViewDelegate> {
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    UIButton *m_actionBtn;
    MMUILabel *m_customerServiceLabel;
    NSString *m_headTitle;
    NSString *m_headContent;
    NSString *m_headContentWithLink;
}

@property (retain, nonatomic) UIImage *m_logoSVGImage;
@property (retain, nonatomic) NSString *m_actionBtnStr;
@property (nonatomic) BOOL m_isWeakActionBtn;
@property (nonatomic) BOOL m_isShowLeftCloseBarButton;
@property (nonatomic) BOOL m_isShowLeftBackBarButton;
@property (nonatomic) BOOL m_bHiddenOperateButton;
@property (nonatomic) BOOL forceDisplay;
@property (copy, nonatomic) id /* block */ m_resultActionBlock;
@property (weak, nonatomic) id<MMAcceptAgreementResultViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHeadTitle:(id)a0 headContent:(id)a1;
- (id)initWithHeadTitle:(id)a0 headContentWithLink:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)layoutView;
- (void)layoutCommonHeadView;
- (void)layoutActionBtn;
- (void)layoutCustomerServiceLabel;
- (void)onCustomerServiceLabelTapped;
- (void)doAction;
- (void)onHeadContentLinkClicked:(id)a0;
- (void).cxx_destruct;

@end
