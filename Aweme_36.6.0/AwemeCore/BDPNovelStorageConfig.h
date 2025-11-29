@class NSString, BDPUniqueID, NSArray;

@interface BDPNovelStorageConfig : NSObject

@property (nonatomic) long long bookStorageTotalSizeLimit;
@property (nonatomic) long long bookStorageSizeLimit;
@property (copy, nonatomic) NSString *bookStoragePath;
@property (nonatomic) long long userStorageSizeLimit;
@property (copy, nonatomic) NSString *userStoragePath;
@property (copy, nonatomic) NSString *userStorageBackupPath;
@property (nonatomic) BOOL enablePerformanceTrack;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL enableWordDetect;
@property (nonatomic) BOOL enableWordDetectAsync;
@property (retain, nonatomic) NSArray *bookWhiteList;
@property (retain, nonatomic) NSArray *appWhiteList;
@property (retain, nonatomic) NSArray *bookBlackList;
@property (retain, nonatomic) NSArray *appBlackList;
@property (retain, nonatomic) NSArray *blockCharacters;

- (void).cxx_destruct;

@end
