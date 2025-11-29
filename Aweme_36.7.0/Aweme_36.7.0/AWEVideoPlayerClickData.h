@class UITapGestureRecognizer;
@protocol AWEPlayVideoViewControllerDelegate;

@interface AWEVideoPlayerClickData : NSObject

@property (retain, nonatomic) id<AWEPlayVideoViewControllerDelegate> videoViewController;
@property (retain, nonatomic) UITapGestureRecognizer *recognizer;

- (void).cxx_destruct;

@end
