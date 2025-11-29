@class UIColor;

@interface IESECArrowImageConfiguration : NSObject

@property (nonatomic) unsigned long long direction;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double lineWidth;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) unsigned long long lineStyle;
@property (nonatomic) BOOL useInsetDraw;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;

- (void).cxx_destruct;
- (id)init;

@end
