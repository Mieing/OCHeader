@interface KindaUIScrollView : UIScrollView

@property (nonatomic) BOOL isHorizontal;
@property (nonatomic) BOOL showsScrollIndicator;
@property (nonatomic) BOOL scrollWhenViewSizeEnough;

- (id)init;
- (void)layoutSubviews;
- (void)addSubview:(id)a0;

@end
