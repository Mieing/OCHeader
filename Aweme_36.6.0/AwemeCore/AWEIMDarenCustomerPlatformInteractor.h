@class NSString;

@interface AWEIMDarenCustomerPlatformInteractor : AWEIMComponentBase <AWEIMDarenCustomerPlatformInteractorInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;
+ (id)sharedInstance;

- (void)componentDidMounted:(id)a0;
- (void)onTapSendGoodsOrOrdersWithConversation:(id)a0 type:(unsigned long long)a1;
- (BOOL)enableSendGoodsWithConversation:(id)a0;
- (BOOL)enableSendOrdersWithConversation:(id)a0;
- (void)p_trackSendGoodsOrOrdersClickWithConversation:(id)a0 type:(unsigned long long)a1;

@end
