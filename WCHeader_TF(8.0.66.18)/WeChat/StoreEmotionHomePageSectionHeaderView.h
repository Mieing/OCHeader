@class NSString, MMUILabel;

@interface StoreEmotionHomePageSectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) NSString *title;

+ (double)height;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)initSubviews;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
