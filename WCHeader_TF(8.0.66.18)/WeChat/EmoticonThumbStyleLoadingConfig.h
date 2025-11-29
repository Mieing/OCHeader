@class UIImage, CAAnimation;

@interface EmoticonThumbStyleLoadingConfig : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) CAAnimation *animation;
@property (nonatomic) struct CGSize { double width; double height; } animationPreferedSize;

- (void).cxx_destruct;

@end
