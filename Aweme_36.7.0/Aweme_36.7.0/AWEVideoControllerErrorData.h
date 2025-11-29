@class NSError;
@protocol AWEPlayVideoViewControllerDelegate;

@interface AWEVideoControllerErrorData : NSObject

@property (retain, nonatomic) id<AWEPlayVideoViewControllerDelegate> videoViewController;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
