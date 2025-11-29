@class NSString, UIViewController, AWEPageContext;
@protocol AWEPlayInteractionContextProtocol, AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionBaseViewControllerProtocol, AWEPlayInteractionBaseContextProtocol;

@interface AWEPlayInteractionEnterFullPageDefaultRouter : NSObject <AWEPlayInteractionEnterFullPageRouterDispatchProtocol, AWEPlayInteractionEnterFullPageRouterProtocol, AWEPlayInteractionEnterFullPageDefaultRouterProtocol>

@property (weak, nonatomic) UIViewController<AWEPlayInteractionBaseViewControllerProtocol, AWEPlayInteractionViewControllerProtocol> *container;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionBaseContextProtocol, AWEPlayInteractionContextProtocol> *context;
@property (copy, nonatomic) id /* block */ enterFullPageBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;
+ (BOOL)isSingleLivePhotoAllowedToDetail;
+ (void)appendLogExtra:(id)a0 withParams:(id)a1;
+ (void)appendLogExtra:(id)a0 withContainer:(id)a1;
+ (void)appendLogExtra:(id)a0 withContext:(id)a1;
+ (BOOL)enableFullPageSearchParams;
+ (void)appendSearchParamsWithLogExtra:(id)a0 withContainer:(id)a1;

- (void)updateEnterFullPageBlock:(id /* block */)a0;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (id)initWithContainer:(id)a0 context:(id)a1;
- (BOOL)shouldRouterWithParams:(id)a0;
- (void)executeRouterWithParams:(id)a0;
- (id)createEnterFullPagePayloadWithParams:(id)a0;
- (id)createLogExtraWithParams:(id)a0;
- (id)getPriorityType;
- (void).cxx_destruct;
- (void)reset;

@end
