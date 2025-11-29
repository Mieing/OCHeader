@class NSString, NSMutableArray, MMBizFileMatchNode;

@interface MMFolder : NSObject <PBCoding>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long size;
@property (nonatomic) int level;
@property (retain, nonatomic) NSMutableArray *subFolders;
@property (retain, nonatomic) NSMutableArray *subFiles;
@property (nonatomic) long long diffCacheSize;
@property (nonatomic) BOOL bFoundCache;
@property (nonatomic) long long m_onlyBizType;
@property (nonatomic) int m_onlyFileTypeInUse;
@property (nonatomic) int m_onlyWeChatFileClass;
@property (nonatomic) long long m_storeTimeType;
@property (retain, nonatomic) MMBizFileMatchNode *m_bizMatchNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_size;
+ (void)PBArrayAdd_subFiles;
+ (void)PBArrayAdd_subFolders;
+ (void)PBArrayAdd_diffCacheSize;
+ (void)PBArrayAdd_bFoundCache;
+ (void)initialize;
+ (void)matchBizWithChildFolder:(id)a0 parentFolder:(id)a1;
+ (struct MMBizMatchInfo { long long x0; long long x1; int x2; int x3; })fileMatched:(id)a0 inFolder:(id)a1;

- (id)getPBPropertyTable;
- (long long)compare:(id)a0;
- (BOOL)isMarkFolder;
- (void).cxx_destruct;

@end
