@class AWEAwemeBaseViewController;
@protocol AWEFeedTableViewCellViewControllerProtocol;

@interface AWEFeedPipUserInfo : NSObject

@property (retain, nonatomic) AWEAwemeBaseViewController<AWEFeedTableViewCellViewControllerProtocol> *feedVC;
@property (copy, nonatomic) id /* block */ playLoadingAnimationHandler;
@property (copy, nonatomic) id /* block */ stopLoadingAnimationHandler;

- (void).cxx_destruct;

@end
