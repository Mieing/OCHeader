@class NSDictionary, UIViewController, BDXContext;
@protocol BDXPageContainerProtocol;

@interface AWEShareSearchLandingPageModel : NSObject

@property (weak, nonatomic) UIViewController<BDXPageContainerProtocol> *bdxContainerVC;
@property (weak, nonatomic) BDXContext *bdxContext;
@property (copy, nonatomic) id /* block */ needShowTranscodingSwitchBlock;
@property (copy, nonatomic) id /* block */ transcodingEnabledBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSDictionary *shareInfo;

- (void).cxx_destruct;

@end
