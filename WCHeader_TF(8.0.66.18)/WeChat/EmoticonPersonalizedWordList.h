@class EmoticonWordListMeta, NSMutableSet, NSString;

@interface EmoticonPersonalizedWordList : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableSet *words;
@property (retain, nonatomic) EmoticonWordListMeta *meta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_words;
+ (void)PBArrayAdd_meta;
+ (void)initialize;
+ (id)path;
+ (unsigned int)transferSvrWordListType:(unsigned int)a0;
+ (id)getCachedWordList;
+ (void)saveToCache:(id)a0;
+ (void)clearAll;
+ (void)markUpdated;
+ (BOOL)isExpiredWithConfigInterval:(unsigned int)a0;

@end
