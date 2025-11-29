@class NSString, NSMutableSet;
@protocol IESLiveSocialInteractAction, IESLiveSocialInteractPreLoadExAction;

@interface IESLiveInteractActionDispatcher : NSObject <IESLiveSocialInteractExActionDispatcher>

@property (weak, nonatomic) id<IESLiveSocialInteractAction> socialActionListener;
@property (weak, nonatomic) id<IESLiveSocialInteractPreLoadExAction> socialExActionListener;
@property (retain, nonatomic) NSMutableSet *fallbackSelectors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)isPreLoading;
- (id)copyInvocation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
