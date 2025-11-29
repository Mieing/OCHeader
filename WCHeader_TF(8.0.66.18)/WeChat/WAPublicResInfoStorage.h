@class NSString, NSMutableDictionary;

@interface WAPublicResInfoStorage : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *dicPublicInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_dicPublicInfo;
+ (void)initialize;
+ (id)loadStorageFromPath:(id)a0;
+ (BOOL)saveStorage:(id)a0 toPath:(id)a1;

- (id)getPBPropertyTable;
- (id)init;
- (id)getShouldKeepPublicResVersionArr;
- (void)forceUpdate2Version:(unsigned int)a0;
- (BOOL)hasVersion:(unsigned int)a0;
- (void)saveResInfo:(id)a0 withVersion:(unsigned int)a1;
- (void)deleteResInfoWithVersion:(unsigned int)a0;
- (void)deleteResInfoBeyondShouldKeepVersion:(id)a0;
- (id)getLatestVersionResInfo;
- (id)getDescendingVersion;
- (void)adjustOldPublicResVersion;
- (void).cxx_destruct;

@end
