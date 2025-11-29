@class NSString, NSDictionary, AWEAwemeModel, AWEPlayInteractionContext, UIViewController;
@protocol AWETemplateBarVideoInfoProtocol, AWEPlayInteractionViewControllerProtocol;

@interface AWETemplateBarContext : AWEPageContext

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) BOOL shouldShowFeedBannerTips;
@property (weak, nonatomic) id<AWETemplateBarVideoInfoProtocol> videoInfoDelegate;
@property (retain, nonatomic) AWEPlayInteractionContext *interactionContext;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionController;

- (void).cxx_destruct;

@end
