@class NSString, BDPUniqueID, NSMutableDictionary;

@interface BDPNavigationBarOnClickedService : NSObject <BDPNavigationBarOnClickedService, BDPAppRouteChangeMessage>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL isShowModel;
@property (retain, nonatomic) NSMutableDictionary *customAlertParams;
@property (nonatomic) long long enablePageID;
@property (nonatomic) long long disablePageID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *cancelText;
@property (copy, nonatomic) NSString *confirmText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)onAppRouteChangePageDidEnterWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)onAppRouteChangePageDidLeaveWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)eventWithName:(id)a0 params:(id)a1;
- (void)navigationBarOnClickedWithCompletion:(id /* block */)a0 navigationController:(id)a1 pageID:(long long)a2 type:(long long)a3;
- (void)enableAlertWithParam:(id)a0 uniqueID:(id)a1 pageID:(long long)a2;
- (void)enableCustomAlertWithParam:(id)a0 uniqueID:(id)a1 pageID:(long long)a2;
- (id)getCustomAlertParamsWithPageID:(id)a0;
- (void)disableAlertWithUniqueID:(id)a0 pageID:(long long)a1;
- (void)customUpdateData:(id)a0;
- (void)checkAndSubscribeWithType:(id)a0 pageID:(long long)a1;
- (id)getTrackerContent:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
