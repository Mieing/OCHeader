@class UIImage, UIView;

@interface ImageStyleLoadingConfig : NSObject

@property (retain, nonatomic) UIImage *loadingImage;
@property (retain, nonatomic) UIView *customLoadingView;
@property (retain, nonatomic) UIImage *loadFailImage;
@property (retain, nonatomic) UIView *customLoadFailView;
@property (nonatomic) BOOL enableClickToRetry;

- (void).cxx_destruct;

@end
