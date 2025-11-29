@class UIViewController;
@protocol AWEAwemePlayVideoViewControllerProtocol;

@interface AWEMVChannelPrepareManager : NSObject

@property (nonatomic) BOOL enablePrepare;
@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol> *preparedPlayer;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (id)sharedInstance;

- (id)getInflowPreparedPlayerIfHas;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (BOOL)abTestEnable;
- (BOOL)canPrepare:(id)a0;
- (BOOL)prepareInflowPlayer:(id)a0;
- (void)stopPreparedPlayerIfHas;
- (void).cxx_destruct;
- (id)init;

@end
