@class LynxShadowNodeStyle;

@interface LynxMarkdownViewInfo : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) float baseline;
@property (retain, nonatomic) LynxShadowNodeStyle *style;
@property (nonatomic) float font_size;

- (void).cxx_destruct;

@end
