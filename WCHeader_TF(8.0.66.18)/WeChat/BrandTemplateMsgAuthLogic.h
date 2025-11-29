@class NSString, NSArray, WASubscriptionMessageRequestListByIDCgi, WASubscriptionMessageRequestSubscribeCgi;
@protocol BrandTemplateMsgAuthLogicDelegate;

@interface BrandTemplateMsgAuthLogic : MMObject <WAPageSheetDelegate, WASubscriptionMessagePageSheetDelegate, MMTipsViewControllerDelegate>

@property (copy, nonatomic) NSString *subscriptionUrl;
@property (copy, nonatomic) NSString *msgContentByUrlEncoded;
@property (copy, nonatomic) NSArray *templateIDArray;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *appid;
@property (nonatomic) unsigned int popupScene;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *extInfo;
@property (retain, nonatomic) WASubscriptionMessageRequestListByIDCgi *requestListByIDCgi;
@property (retain, nonatomic) WASubscriptionMessageRequestSubscribeCgi *requestSubscribeCgi;
@property (weak, nonatomic) id<BrandTemplateMsgAuthLogicDelegate> delegate;
@property (nonatomic) BOOL cancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSubscriptionUrl:(id)a0 username:(id)a1 msgContent:(id)a2;
- (id)initWithTemplateIDArray:(id)a0 username:(id)a1 appid:(id)a2 popupScene:(unsigned int)a3 sessionId:(id)a4 extInfo:(id)a5;
- (void)startSubscriptionUrl;
- (void)startTemplateIDArray;
- (void)sendSubscribeRequestWithViewModel:(id)a0;
- (id /* block */)requestListByIDSucceessHandler;
- (id /* block */)requestListByIDFailHandler;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 tipTag:(long long)a2;
- (id /* block */)requestSubscribeSuccessHandler;
- (id /* block */)requestSubscribeFailHandler;
- (id)containerViewController;
- (void)subscribeSuccessWithResult:(id)a0 cacheMaxAge:(unsigned int)a1;
- (void)callFinishedDelegateWithResult:(id)a0 extInfo:(id)a1 success:(BOOL)a2 errorKey:(unsigned long long)a3;
- (void)callFinishedDelegateWithResult:(id)a0 extInfo:(id)a1 success:(BOOL)a2 errorCode:(long long)a3 errorMessage:(id)a4;
- (void)pageSheetWillShow:(id)a0;
- (void)pageSheetWillClose:(id)a0;
- (void)authorizeAccept:(id)a0;
- (void)authorizeReject:(id)a0;
- (void)authDecline:(id)a0;
- (void)pageSheet:(id)a0 needToPushViewController:(id)a1;
- (id)jsonFormatResult:(id)a0;
- (void).cxx_destruct;

@end
