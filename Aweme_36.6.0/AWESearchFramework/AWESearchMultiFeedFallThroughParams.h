@class NSArray, UIViewController, NSDictionary;
@protocol AWEFallThroughFeedViewControllerProtocol;

@interface AWESearchMultiFeedFallThroughParams : NSObject

@property (retain, nonatomic) UIViewController<AWEFallThroughFeedViewControllerProtocol> *viewController;
@property (nonatomic) long long index;
@property (retain, nonatomic) NSArray *filtVideos;
@property (retain, nonatomic) NSDictionary *feedLogExtra;

- (void).cxx_destruct;

@end
