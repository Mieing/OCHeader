@class UIImageView;

@interface AWEUGDesktopChannelGuideViewHelper : NSObject

@property (retain, nonatomic) UIImageView *imageView;

+ (id)sharedInstance;

- (void)createLabelFromTemplate:(id)a0 defaultString:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
