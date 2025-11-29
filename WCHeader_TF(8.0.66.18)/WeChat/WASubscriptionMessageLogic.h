@class NSArray, NSString, WASubscriptionMessageDataReporter, WASubscriptionMessagePageSheet;
@protocol WASubscriptionMessageLogicDataSource, WASubscriptionMessageLogicDelegate;

@interface WASubscriptionMessageLogic : MMObject <WASubscriptionMessagePageSheetDelegate, WAPageSheetDelegate>

@property (copy, nonatomic) NSArray *templateIDArray;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *appid;
@property (nonatomic) unsigned int appType;
@property (retain, nonatomic) WASubscriptionMessageDataReporter *dataReporter;
@property (retain, nonatomic) WASubscriptionMessagePageSheet *pageSheet;
@property (weak, nonatomic) id<WASubscriptionMessageLogicDelegate> delegate;
@property (weak, nonatomic) id<WASubscriptionMessageLogicDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTemplateIDArray:(id)a0 username:(id)a1 appid:(id)a2 appType:(unsigned int)a3;
- (id)getPageSheetContentView;
- (void)start;
- (void)sendListRequest;
- (void)sendSubscribeRequestWithViewModel:(id)a0;
- (id /* block */)requestListByIDSucceessHandler;
- (id /* block */)requestListByIDFailHandler;
- (id /* block */)requestSubscribeSuccessHandler;
- (id /* block */)requestSubscribeFailHandler;
- (id)containerViewController;
- (void)callFinishedDelegateWithResult:(id)a0 success:(BOOL)a1 cancel:(BOOL)a2 errorMessage:(id)a3 errorCode:(long long)a4;
- (void)callWillShowDelegate;
- (void)callWillDismissDelegate;
- (void)pageSheetWillShow:(id)a0;
- (void)pageSheetWillClose:(id)a0;
- (void)authorizeAccept:(id)a0;
- (void)authorizeReject:(id)a0;
- (void)authDecline:(id)a0;
- (void).cxx_destruct;

@end
