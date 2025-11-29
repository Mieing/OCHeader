@class UILabel, AWETemplateSeparatorView, UIImageView, NSString, UIView, AWETemplateBarModel, AWETemplateBarContext;
@protocol AWETemplateViewActionProtocol;

@interface AWETemplateCommonView : UIView <AWETemplateViewProtocol>

@property (retain, nonatomic) AWETemplateBarModel *currentModel;
@property (retain, nonatomic) AWETemplateBarContext *barContext;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *headerIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWETemplateSeparatorView *separatorView;
@property (retain, nonatomic) UILabel *mainContent;
@property (retain, nonatomic) UILabel *subContentLabel;
@property (retain, nonatomic) UIImageView *tailImageView;
@property (weak, nonatomic) id<AWETemplateViewActionProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)configSubviews;
- (void)layoutSubview;
- (double)updateHeaderIconSizeWHForLargeFontAdaptIfNeeded:(double)a0;
- (double)updateTailIconSizeWHForLargeFontAdaptIfNeeded:(double)a0;
- (void)updateSizeWithLayoutModel:(id)a0 targetView:(id)a1;
- (void)didClickCommonView;
- (id)labelTextFontWithSize:(double)a0 weight:(long long)a1;
- (void)addSubViews;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 context:(id)a1;
- (id)initWithData:(id)a0;
- (void)updateWithData:(id)a0;
- (void)reset;
- (void)setContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;

@end
