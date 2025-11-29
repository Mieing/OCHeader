@class NSDictionary, UIViewController, AWEStandardClassifyBarModel;

@interface AWEPlayInteractionRelatedTemplateViewModel : AWEPlayInteractionBaseViewModel

@property (readonly, nonatomic) NSDictionary *templateModelExtra;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) AWEStandardClassifyBarModel *templateModel;
@property (nonatomic) BOOL didDetailControllerShow;

+ (Class)aAWEFeedRelatedTemplateElementProtocolClass;

- (id)trackParams;
- (id)p_generateCommonRequestParams;
- (void)trackBottomBarShow;
- (void)openTemplateDetail;
- (id)aAWEFeedRelatedTemplateElementProtocol;
- (void)trackDetailControllerShow;
- (void)trackBottomBarClick;
- (void).cxx_destruct;

@end
