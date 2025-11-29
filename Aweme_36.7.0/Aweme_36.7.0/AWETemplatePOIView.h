@class UIStackView, UIView, AWETemplateBarModel, NSString, UIImageView, DUXButton, AWETemplatePOIViewModel, UILabel;
@protocol AWETemplateViewActionProtocol;

@interface AWETemplatePOIView : UIView <AWETemplateViewProtocol>

@property (retain, nonatomic) AWETemplateBarModel *currentModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIStackView *leftContainerView;
@property (retain, nonatomic) UIImageView *headerIcon;
@property (retain, nonatomic) UILabel *mainContentLeft;
@property (retain, nonatomic) UILabel *mainContentRight;
@property (retain, nonatomic) UIStackView *rightContainerView;
@property (retain, nonatomic) DUXButton *tailButton;
@property (retain, nonatomic) UILabel *subContentLabel;
@property (retain, nonatomic) UIImageView *tailImageView;
@property (retain, nonatomic) AWETemplatePOIViewModel *viewModel;
@property (weak, nonatomic) id<AWETemplateViewActionProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configSubviews;
- (void)didClickCommonView;
- (id)labelTextFontWithSize:(double)a0 weight:(long long)a1;
- (void)updateHeaderTailIconSize;
- (double)updateIconSizeWHForLargeFontAdaptIfNeeded:(double)a0;
- (void)didClickTail;
- (void)addSubViews;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 context:(id)a1;
- (id)initWithData:(id)a0;
- (void)updateWithData:(id)a0;
- (void)reset;
- (void)setContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
