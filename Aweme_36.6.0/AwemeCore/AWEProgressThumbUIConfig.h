@class AWEProgressUIColorConfig, AWEProgressUIContainerConfig;

@interface AWEProgressThumbUIConfig : NSObject

@property (retain, nonatomic) AWEProgressUIContainerConfig *containerConfig;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) AWEProgressUIColorConfig *borderColorConifg;

- (void).cxx_destruct;

@end
