@class NSString, AWEAwemeModel;
@protocol AWECommerceComponentContext;

@interface AWEAppStoreHistoryManager : NSObject <AWECommerceComponentProtocol, AWEAppStoreHistoryManager>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL hasOrderGenerateRecord;
@property (weak, nonatomic) id<AWECommerceComponentContext> commerceContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowComponentWithContext:(id)a0;
+ (id)adServiceRecordSettingsSettings;
+ (BOOL)enableAppStoreHistoryManager;
+ (void)addAppDownloadHistoryWithAppID:(id)a0 extra:(id)a1 creativeID:(id)a2 downloadURL:(id)a3;

- (void)handleOrderGenerateRecordNoti:(id)a0;
- (void)showOrderCenterSnackBar:(long long)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)willDisplay;

@end
