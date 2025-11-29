@class NSMutableDictionary;

@interface BDTGTicketFullPathTracker : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (retain, nonatomic) NSMutableDictionary *ticketNameToTicketUpdateInfoMap;
@property (retain, nonatomic) NSMutableDictionary *ticketNameToTicketUpdateTimestampMap;
@property (retain, nonatomic) NSMutableDictionary *ticketNameToSignVerifyFailInfoMap;

+ (id)snapshotForRequest:(id)a0 response:(id)a1;
+ (id)sharedInstance;

- (long long)ticketUpdateTimestampForTicketName:(id)a0;
- (void)serverDataDidUpdateWithRequset:(id)a0 response:(id)a1;
- (void)ticketDidUpdateWithRequset:(id)a0 response:(id)a1 ticketName:(id)a2 ticket:(id)a3 tsSign:(id)a4;
- (id)ticketUpdateInfoForTicketName:(id)a0;
- (void)signVerifyErrorUpdateWithRequest:(id)a0 response:(id)a1;
- (id)signVerifyErrorForTicketName:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
