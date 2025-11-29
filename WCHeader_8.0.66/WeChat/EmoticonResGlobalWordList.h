@class EmoticonWordListMeta, NSMutableSet;

@interface EmoticonResGlobalWordList : NSObject

@property (retain, nonatomic) NSMutableSet *words;
@property (retain, nonatomic) EmoticonWordListMeta *meta;

+ (id)getCachedWordList;
+ (id)pathRelativeToDir:(id)a0;
+ (void)clearAll;

- (id)init;
- (void).cxx_destruct;

@end
