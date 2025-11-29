@class NSString, NSMutableDictionary, AWESearchTabGuideStorageDailyModel;

@interface AWEEcomSearchTabGuideStorageManager : NSObject <AWESearchTabGuideStorageProtocol>

@property (retain, nonatomic) NSMutableDictionary *storageData;
@property (retain, nonatomic) AWESearchTabGuideStorageDailyModel *dailyModel;
@property (copy, nonatomic) NSString *userID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (id)currentUserStorageData;
- (BOOL)p_checkExitWithAction:(id)a0 exitRule:(id)a1 isGlobal:(BOOL)a2;
- (id)storageDataWithGuideID:(id)a0;
- (id)getBanedGuidIDList;
- (void).cxx_destruct;
- (void)save;

@end
