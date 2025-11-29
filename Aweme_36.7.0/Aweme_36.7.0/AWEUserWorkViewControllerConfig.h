@class AWEUserWorkViewControllerTransitionConfig, NSString, NSArray, NSDictionary, NSMutableArray, AWEProfileContext, UIViewController, UIColor;
@protocol AWEDCFeedDataControllerProtocol, AWEUserWorkViewControllerProtocol, AWEUserWorkCustomDataControllerProtocol;

@interface AWEUserWorkViewControllerConfig : NSObject

@property (copy, nonatomic) id /* block */ hitTestBlock;
@property (copy, nonatomic) id /* block */ scrollViewShouldScrollToTop;
@property (retain, nonatomic) AWEUserWorkViewControllerTransitionConfig *transitionConfig;
@property (nonatomic) BOOL enableUserProfileAutoPlay;
@property (nonatomic) BOOL useGradientBGViewInWaterFall;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) UIColor *defaultBackgroundColor;
@property (copy, nonatomic) id /* block */ routerDecideBlock;
@property (copy, nonatomic) id /* block */ transmissionExtraParamsBlock;
@property (copy, nonatomic) id /* block */ enterInnerFlowExtraParamsBlock;
@property (retain, nonatomic) id<AWEDCFeedDataControllerProtocol, AWEUserWorkCustomDataControllerProtocol> dataController;
@property (retain, nonatomic) NSMutableArray *componentArray;
@property (retain, nonatomic) NSArray *customSectionArray;
@property (nonatomic) BOOL isCurrentUser;
@property (weak, nonatomic) AWEProfileContext *profileContext;
@property (weak, nonatomic) UIViewController<AWEUserWorkViewControllerProtocol> *viewController;

- (void).cxx_destruct;
- (id)init;

@end
