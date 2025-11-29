@class AWEProfileExtensionAreaCommonParamModel, NSString;
@protocol AWEProfileExtensionAreaCardViewProtocol, AWEProfileExtensionAreaContainerProtocol;

@interface AWEPOIUserProfileEntryControllerPrivateDomain : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) id<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (weak, nonatomic) id<AWEProfileExtensionAreaContainerProtocol> delegate;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL hasPreloaded;
@property (copy, nonatomic) NSString *sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)a0;

- (void)passCardView:(id)a0;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (void)configDelegate:(id)a0;
- (void)trackEvent:(id)a0 extra:(id)a1;
- (void)transferToURLString:(id)a0;
- (id)webviewSchemaString:(id)a0 joinParameters:(id)a1;
- (id)webviewUrlString:(id)a0 joinParameters:(id)a1;
- (id)flashSaleExtra;
- (id)offlineShopExtra;
- (void)trackAssistantWorkdeskFor:(id)a0;
- (void)addLifeInitialInfoIfNeeded;
- (BOOL)isFirstLocalLifeEntry;
- (id)addExtraBussinessParams;
- (void).cxx_destruct;
- (void)dealloc;

@end
