@class NSString, NSObject, CKDatabase;
@protocol OS_dispatch_queue, BDUGBGCloudkitTaskProtocol;

@interface BDUGCloudkitManager : NSObject

@property (retain, nonatomic) NSString *cloudKitSilentRecordType;
@property (retain, nonatomic) NSString *cloudKitSilentSubscriptionID;
@property (retain, nonatomic) NSString *cloudKitDatabaseIdentifier;
@property (retain, nonatomic) CKDatabase *dataBase;
@property (nonatomic) BOOL isDatabaseReady;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) id<BDUGBGCloudkitTaskProtocol> delegate;

+ (id)sharedInstance;

- (void)setupCloudKit;
- (void)beginActiveFromScene:(id)a0 completion:(id /* block */)a1;
- (BOOL)isValidMobileProvision;
- (void)addSubscriptionWithRecordType:(id)a0 subscriptionID:(id)a1;
- (void)saveRecordWithType:(id)a0 fromScene:(id)a1 completion:(id /* block */)a2;
- (id)subscriptionWithRecordType:(id)a0 subscriptionID:(id)a1;
- (void)clearAllSubscription;
- (void).cxx_destruct;

@end
