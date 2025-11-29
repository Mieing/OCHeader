@class UIStackView, NSArray, UIView, IESECUIButton, IESECRecommendFeedbackModel;
@protocol IESECRecommendFeedbackViewDelegate;

@interface IESECRecommendFeedbackView : UIView

@property (retain, nonatomic) UIView *navView;
@property (retain, nonatomic) IESECUIButton *backButton;
@property (retain, nonatomic) IESECUIButton *closeButton;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) BOOL isFirstPage;
@property (retain, nonatomic) NSArray *itemList;
@property (retain, nonatomic) IESECRecommendFeedbackModel *model;
@property (weak, nonatomic) id<IESECRecommendFeedbackViewDelegate> delegate;

- (void)itemAction:(id)a0;
- (void)reloadDataWithAnimation:(BOOL)a0;
- (void)reloadStackViewData;
- (void)spaceAction;
- (void)backAction;
- (void).cxx_destruct;
- (void)closeAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
