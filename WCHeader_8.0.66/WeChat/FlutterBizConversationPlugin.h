@class NSString, MMFlutterViewController, NSMutableDictionary, NSObject, NSMutableSet, ConversationListCallbackApi, NSMutableArray, UIViewController;
@protocol OS_dispatch_queue, BrandTLViewControllerProtocol;

@interface FlutterBizConversationPlugin : NSObject <IContactMgrExt, BrandDatabaseNotifyDelegate, MMFlutterPlugin, ConversationListApi>

@property (retain, nonatomic) ConversationListCallbackApi *conversationListCallbackApi;
@property (retain, nonatomic) NSMutableSet *clickSet;
@property (weak, nonatomic) UIViewController *currentViewController;
@property (retain) NSMutableArray *contactArrSortedByUpdateTime;
@property (retain) NSMutableArray *contactArrSortedByCreateTime;
@property (retain) NSMutableDictionary *digestDataMap;
@property (nonatomic) long long sortType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *setFastLoadTemplateType;
@property (weak, nonatomic) MMFlutterViewController<BrandTLViewControllerProtocol> *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController;
- (void)initContact;
- (void)initDigest;
- (void)initAndSortData;
- (void)sort;
- (id)getConversationCountWithError:(id *)a0;
- (void)getConversationListOrderByUpdateTimeBuffer:(long long)a0 size:(long long)a1 completion:(id /* block */)a2;
- (void)getConversationListOrderByCreateTimeBuffer:(long long)a0 size:(long long)a1 completion:(id /* block */)a2;
- (void)unSubscribeContactUsername:(id)a0 error:(id *)a1;
- (void)doSearchWithError:(id *)a0;
- (void)enterProfileUsername:(id)a0 addContactScene:(long long)a1 error:(id *)a2;
- (void)fetchDigestWithError:(id *)a0;
- (id)convertContactData:(id)a0;
- (void)gotoUrlInfo:(id)a0 error:(id *)a1;
- (void)addToPreloadUrl:(id)a0 itemShowType:(long long)a1 openScene:(long long)a2 error:(id *)a3;
- (void)onNewBrandContact:(id)a0;
- (void)onModifyContact:(id)a0;
- (void)onDeleteContact:(id)a0;
- (void)onDataChange:(id)a0 Username:(id)a1;
- (void)reportOnClickItem:(id)a0;
- (void)report27270:(int)a0;
- (void)notifyFlutterReload;
- (BOOL)isContactNeedExtraFiltered:(id)a0;
- (void).cxx_destruct;

@end
