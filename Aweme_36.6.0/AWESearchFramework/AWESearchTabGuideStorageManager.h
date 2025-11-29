@class NSString, NSMutableDictionary, AWESearchTabGuideStorageDailyModel;

@interface AWESearchTabGuideStorageManager : NSObject <AWESearchTabGuideStorageProtocol>

@property (retain, nonatomic) NSMutableDictionary *storageData;
@property (retain, nonatomic) AWESearchTabGuideStorageDailyModel *dailyModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

@end
