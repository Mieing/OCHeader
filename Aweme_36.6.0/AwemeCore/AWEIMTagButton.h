@interface AWEIMTagButton : UIButton

@property (nonatomic) unsigned long long style;
@property (nonatomic) double awe_spacing;

- (void)resizeFrame;
- (id)initWithStyle:(unsigned long long)a0;
- (void)layoutSubviews;

@end
