@class NSString, Protocol;
@protocol AWELiveAudienceViewControllerDelegate;

@interface AWELiveAudienceViewControllerDelegateProxy : NSObject <HTSLiveAudienceViewControllerDelegate>

@property (weak, nonatomic) id<AWELiveAudienceViewControllerDelegate> outDelegate;
@property (retain, nonatomic) Protocol *proto;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct objc_method_description { SEL x0; char *x1; })methodSignatureOfProtocol:(id)a0 with:(SEL)a1;

- (BOOL)isLiveProtocol:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
