@class NSString, NSObject;
@protocol AWECommerceAdRichAwemeBaseManager, AWECommerceComponentContext;

@interface AWECommerceAdRichAwemeBaseManager : NSObject <AWECommerceAdRichAwemeBaseManager, AWECommerceComponentProtocol>

@property (retain, nonatomic) NSObject<AWECommerceAdRichAwemeBaseManager> *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWECommerceComponentContext> commerceContext;

+ (BOOL)canShowComponentWithContext:(id)a0;
+ (BOOL)feedCanAutoPlayWithPresentedViewController:(id)a0;
+ (Class)provideManager;
+ (unsigned long long)albumSlideAutoReplayInAdRichAweme:(id)a0;

- (void)enterWithInteractionViewController:(id)a0 model:(id)a1;
- (BOOL)isRichAwemeManuallySlide:(unsigned long long)a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)pause;
- (void)leave;
- (void)reset;
- (void)resume;

@end
