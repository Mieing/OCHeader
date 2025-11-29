@class AWEProgressUIColorConfig;

@interface AWEProgressUIContainerConfig : NSObject

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) double height;
@property (retain, nonatomic) AWEProgressUIColorConfig *bgColorConifg;

+ (id)containerConfigWithEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 height:(double)a1 bgColorConfig:(id)a2;

- (void).cxx_destruct;

@end
