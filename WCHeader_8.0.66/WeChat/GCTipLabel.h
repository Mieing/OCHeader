@class UILabel, UIImageView;

@interface GCTipLabel : UIView

@property (retain, nonatomic) UILabel *unReadCountLabel;
@property (retain, nonatomic) UIImageView *unReadIconView;
@property (nonatomic) unsigned long long tipType;

+ (id)createTipLabel;
+ (id)createTipLabel:(unsigned long long)a0;

- (id)initWithLabel:(id)a0 tipType:(unsigned long long)a1;
- (void)updateLayerCornerRadius;
- (void)layoutSubviews;
- (void)setText:(id)a0;
- (void)updateWidth;
- (void)setUnreadIconImage:(id)a0;
- (void).cxx_destruct;

@end
