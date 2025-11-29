@class NSString, NSMutableDictionary;

@interface AWEEcomSearchMerchandiseTabGuideStorageManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *storageData;
@property (copy, nonatomic) NSString *userID;

+ (id)shareManager;

- (id)currentUserStorageData;
- (id)storageDataWithTabType:(id)a0;
- (void).cxx_destruct;
- (void)save;

@end
