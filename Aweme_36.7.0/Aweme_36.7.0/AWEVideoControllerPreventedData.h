@class NSString;
@protocol AWEPlayVideoViewControllerDelegate;

@interface AWEVideoControllerPreventedData : NSObject

@property (retain, nonatomic) id<AWEPlayVideoViewControllerDelegate> videoViewController;
@property (copy, nonatomic) NSString *playPreventedReason;

- (void).cxx_destruct;

@end
