@class UIImage, YYAnimatedImageView;
@protocol YYAnimatedImage;

@interface _YYAnimatedImageViewFetchOperation : NSOperation

@property (weak, nonatomic) YYAnimatedImageView *view;
@property (nonatomic) unsigned long long nextIndex;
@property (retain, nonatomic) UIImage<YYAnimatedImage> *curImage;

- (void).cxx_destruct;
- (void)main;

@end
