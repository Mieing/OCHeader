@class NSDictionary, NSString;

@interface AWEIMMessageListFormatSearchBrandADComponent : AWEIMComponentBase <AWEFormatSearchBrandADInjectService>

@property (copy, nonatomic) NSDictionary *chatExtra;
@property (copy, nonatomic) NSDictionary *extraBrandADInfo;
@property (copy, nonatomic) NSDictionary *extraImgClickInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getFormatChatExtraFromComponentContext:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)createBtmChainWithBtmInfo:(id)a0 clickedView:(id)a1 enterNewPage:(BOOL)a2 addBtmChain:(BOOL)a3 chainLength:(long long)a4 targetPages:(id)a5;
- (BOOL)isFromSearchBrandAD;
- (void)trackADEventWithContextBuildBlock:(id /* block */)a0;
- (void)routeToAdLandingPageWithParams:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;

@end
