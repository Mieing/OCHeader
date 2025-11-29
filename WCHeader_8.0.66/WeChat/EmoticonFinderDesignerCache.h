@class NSString, NSMutableArray;

@interface EmoticonFinderDesignerCache : MMObject <PBCoding>

@property (nonatomic) unsigned int designerUin;
@property (retain, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) NSMutableArray *storeItemList;
@property (retain, nonatomic) NSMutableArray *emojiInfoList;
@property (retain, nonatomic) NSMutableArray *ipSetList;
@property (nonatomic) unsigned long long totalEmoticonCount;
@property (nonatomic) unsigned long long totalEmojiCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_totalEmoticonCount;
+ (void)PBArrayAdd_totalEmojiCount;
+ (void)PBArrayAdd_storeItemList;
+ (void)PBArrayAdd_emojiInfoList;
+ (void)PBArrayAdd_ipSetList;
+ (void)initialize;
+ (id)getCacheForDesignerUin:(unsigned int)a0;
+ (BOOL)isCahceExistForDesignerUin:(unsigned int)a0;
+ (id)getEmoticonFinderDesignerRootDir;
+ (id)getEmoticonFinderDesignerCachePathWithDesignerUin:(unsigned int)a0;

@end
