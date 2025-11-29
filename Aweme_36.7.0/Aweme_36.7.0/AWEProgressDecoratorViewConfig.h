@class AWEProgressUIColorConfig;

@interface AWEProgressDecoratorViewConfig : NSObject

@property (retain, nonatomic) AWEProgressUIColorConfig *normalDotConfig;
@property (nonatomic) struct CGSize { double width; double height; } normalDotSize;
@property (nonatomic) double normalCornerRadius;

- (void).cxx_destruct;

@end
