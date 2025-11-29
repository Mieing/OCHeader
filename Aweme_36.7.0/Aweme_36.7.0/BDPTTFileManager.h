@class NSString, NSMutableDictionary;

@interface BDPTTFileManager : NSObject <BDPWarmBootMessage>

@property (retain, nonatomic) NSMutableDictionary *uniqueIdIndexDict;
@property (retain, nonatomic) NSMutableDictionary *indexUniqueIdDict;
@property (nonatomic) long long folderIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ttFileInfoWithRelativePath:(id)a0 sanbox:(id)a1 addFileScheme:(BOOL)a2;
+ (id)generateRandomFilePathWithType:(long long)a0 sandbox:(id)a1 extension:(id)a2 addFileScheme:(BOOL)a3;
+ (id)convertToTTFileWithPath:(id)a0 sandbox:(id)a1;
+ (id)convertToFileWithTTFilePath:(id)a0 sandbox:(id)a1;
+ (id)generateTTFilePathWithType:(long long)a0 extension:(id)a1 sandbox:(id)a2;
+ (id)falsifyTTFilePathIfNeeded:(id)a0 sandbox:(id)a1;
+ (struct BDPMatchResult { BOOL x0; BOOL x1; unsigned long long x2; BOOL x3; long long x4; })tryMatchTTFileUrl:(id)a0 withScheme:(id)a1 baseName:(id)a2;
+ (struct BDPMatchResult { BOOL x0; BOOL x1; unsigned long long x2; BOOL x3; long long x4; })tryMatchSCFileUrl:(id)a0 withScheme:(id)a1 baseName:(id)a2;
+ (void)removeFalsifiedFolderWithUniqueID:(id)a0;
+ (id)getUniqueIDByFolderIndex:(long long)a0;
+ (id)shareInstance;

- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void).cxx_destruct;

@end
