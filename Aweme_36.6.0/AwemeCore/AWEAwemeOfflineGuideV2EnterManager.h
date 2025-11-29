@class NSString, NSMutableArray, NSHashTable;

@interface AWEAwemeOfflineGuideV2EnterManager : NSObject

@property (retain, nonatomic) NSHashTable *delegates;
@property (nonatomic) long long blockOfflineToastCount;
@property (copy, nonatomic) NSString *needShowToastItemID;
@property (retain, nonatomic) NSMutableArray *hideNetworkTipItemIDs;
@property (copy, nonatomic) NSString *offlineGuideCellEnterFrom;

+ (BOOL)shouldBlockOfflineToast;
+ (unsigned long long)getNetStatus;
+ (id)sharedInstance;

- (void)fireScrollTopGuideCellWithEnterFrom:(id)a0 awemeModel:(id)a1;
- (void)firePlayOfflineAwemeModelWithEnterFrom:(id)a0;
- (void)registerDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterDelegate:(id)a0;

@end
