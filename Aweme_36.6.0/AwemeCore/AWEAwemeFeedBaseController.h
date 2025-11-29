@class NSString, UIViewController;
@protocol AWEAwemeNewDetailTableContainerProtocol, AWEFeedContainerProtocol;

@interface AWEAwemeFeedBaseController : AWEBaseController <AWEAwemeFeedBaseControllerProtocol>

@property (readonly, weak, nonatomic) UIViewController<AWEFeedContainerProtocol> *outerFeedContainer;
@property (readonly, weak, nonatomic) UIViewController<AWEAwemeNewDetailTableContainerProtocol> *innerDetailFeedContainer;
@property (readonly, nonatomic) BOOL isInOuterFeed;
@property (readonly, nonatomic) BOOL isInInnerDetailFeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
