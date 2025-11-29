@class UIButton, UIStackView, NSArray, NSString, UILabel, UIView, IESLiveLinkMicResultPanelViewDataSource;
@protocol IESHYContainerProtocol;

@interface IESLiveLinkMicResultPanelView : UIView <IESLiveLinkMicResultPanelViewProtocol>

@property (retain, nonatomic) IESLiveLinkMicResultPanelViewDataSource *dataSource;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *feedbackBtn;
@property (retain, nonatomic) UILabel *benefitLabel;
@property (retain, nonatomic) UIStackView *greyBackgroundView;
@property (copy, nonatomic) NSArray *gridViews;
@property (retain, nonatomic) UIView *recommendContainer;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (copy, nonatomic) id /* block */ issueFeedbackAction;
@property (copy, nonatomic) id /* block */ requestActivityCompletion;
@property (nonatomic) BOOL supportFeedback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)requestActivityForSite:(unsigned long long)a0;
- (void)layoutActivityContainer;
- (void)onClickFeedbackAction:(id)a0;
- (void).cxx_destruct;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataSource:(id)a1;

@end
