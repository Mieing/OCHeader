@class UIView, NSString, UIImage, BDMannorStyleTemplateComponentDataModel, UIImageView, BDMannorComponentManagerContext, UILabel, UIColor;

@interface BDMannorAdMoreLinkView : UIView

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (nonatomic) double tagAlpha;
@property (nonatomic) BOOL isHollow;
@property (retain, nonatomic) UIColor *tagColor;
@property (retain, nonatomic) UIImage *tagImage;
@property (copy, nonatomic) NSString *tagImageName;
@property (nonatomic) long long decPaddingX;
@property (nonatomic) BOOL labelOnly;
@property (retain, nonatomic) BDMannorStyleTemplateComponentDataModel *dataModel;
@property (weak, nonatomic) BDMannorComponentManagerContext *context;

- (id)initWithModel:(id)a0 context:(id)a1;
- (void)setTagImageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configWithLabelModel:(id)a0;
- (void)setLabelTextFont:(id)a0;
- (void)setLabelLeft:(double)a0;
- (id)initWithContent:(id)a0 alpha:(double)a1 tagImage:(id)a2 height:(double)a3;
- (id)mannor_snapshotImage;
- (id)initWithContent:(id)a0 alpha:(double)a1 tagImage:(id)a2;
- (void).cxx_destruct;
- (void)setCornerRadius:(double)a0;
- (id)snapshot;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)defaultText;
- (void)setupUI;
- (void)layoutUI;

@end
