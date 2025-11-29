@class UIViewController, NSString, AWEShellControllerManager, AWEAwemePageContext;
@protocol AWEFeedControllerProtocol, AWEAwemeNewDetailTableContainerProtocol, AWEFeedContainerProtocol, AWEAwemeFeedServiceBaseContainerProtocol, AWEAwemeNewDetailTableControllerProtocol, AWEAwemeFeedBaseControllerProtocol, AWEFeedContainerServiceResolverProtocol, AWEFeedContainerSafeWrapperProtocol;

@interface AWEFeedContainerBaseService : NSObject <AWEFeedContainerBaseServiceProtocol>

@property (readonly, weak, nonatomic) UIViewController<AWEFeedContainerProtocol> *outerFeedContainer;
@property (readonly, weak, nonatomic) AWEShellControllerManager<AWEFeedControllerProtocol> *outerFeedControllerManager;
@property (readonly, nonatomic) BOOL isInOuterFeed;
@property (readonly, weak, nonatomic) UIViewController<AWEAwemeNewDetailTableContainerProtocol> *innerDetailFeedContainer;
@property (readonly, weak, nonatomic) AWEShellControllerManager<AWEAwemeNewDetailTableControllerProtocol> *innerDetailFeedControllerManager;
@property (readonly, nonatomic) BOOL isInInnerDetailFeed;
@property (nonatomic) long long containerType;
@property (weak, nonatomic) AWEShellControllerManager<AWEAwemeFeedBaseControllerProtocol> *containerControllerManager;
@property (weak, nonatomic) AWEAwemePageContext *context;
@property (weak, nonatomic) id<AWEFeedContainerServiceResolverProtocol> serviceResolver;
@property (weak, nonatomic) UIViewController<AWEAwemeFeedServiceBaseContainerProtocol> *container;
@property (weak, nonatomic) id<AWEFeedContainerSafeWrapperProtocol> containerWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInstance;

- (void).cxx_destruct;

@end
