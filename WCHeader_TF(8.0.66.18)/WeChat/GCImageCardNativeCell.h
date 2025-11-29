@class UIImageView, MMWebImageView, UIView, MMUILabel;

@interface GCImageCardNativeCell : GCChatBaseCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIImageView *playIcon;

+ (void)onCalculatLayoutInfo:(id)a0;
+ (struct CGSize { double x0; double x1; })innerContentSizeForImageCard:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithCellModel:(id)a0;
- (void).cxx_destruct;

@end
