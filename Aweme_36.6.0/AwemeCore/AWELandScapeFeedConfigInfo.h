@class NSString, UIViewController, AWEAwemeModel;
@protocol AWEAwemePlayVideoViewControllerProtocol, AWELandscapeTransitionOuterContextProvider;

@interface AWELandScapeFeedConfigInfo : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) unsigned long long enterScene;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) AWEAwemeModel *fromModel;
@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol> *playerViewController;
@property (weak, nonatomic) id<AWELandscapeTransitionOuterContextProvider> transitionProvider;
@property (retain, nonatomic) UIViewController *viewController;
@property (nonatomic) BOOL needClearStatus;
@property (nonatomic) BOOL needAutoExitLandScape;

- (id)initWithEnterFrom:(id)a0 enterScene:(unsigned long long)a1;
- (void).cxx_destruct;

@end
