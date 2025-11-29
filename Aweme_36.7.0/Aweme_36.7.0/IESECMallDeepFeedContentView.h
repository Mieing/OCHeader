@class IESECMallDeepFeedTitleView, IESECMallDeepFeedBottomActionView, UIImageView, IESECMallDeepFeedSaleMessageView, UIView, NSMutableArray, UIButton;

@interface IESECMallDeepFeedContentView : UIView

@property (retain, nonatomic) UIImageView *productImageView;
@property (retain, nonatomic) UIView *productImageMaskView;
@property (retain, nonatomic) UIButton *enterProductDetailArea;
@property (retain, nonatomic) IESECMallDeepFeedTitleView *titleView;
@property (retain, nonatomic) IESECMallDeepFeedSaleMessageView *saleMessageView;
@property (retain, nonatomic) IESECMallDeepFeedBottomActionView *bottomActionView;
@property (retain, nonatomic) NSMutableArray *reportProductTagArrays;

- (void)enterProductDetail:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithNewModel:(id)a0;

@end
