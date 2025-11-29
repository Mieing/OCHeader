@interface MMContentFitButton : MMUIButton

@property (nonatomic) double expandWidth;
@property (nonatomic) double expandHeight;
@property (nonatomic) double fHeight;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;

@end
