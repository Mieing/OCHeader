@class NSString, NSArray;

@interface MMFinderLiveGameCategoryInfo : NSObject

@property (nonatomic) unsigned int categoryId;
@property (retain, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSArray *gameAppInfoList;
@property (nonatomic) BOOL hasNext;
@property (retain, nonatomic) NSString *queryBuffer;
@property (nonatomic) unsigned int tabId;
@property (retain, nonatomic) NSString *tabName;

+ (id)changeArrayWithGameCategoryInfoList:(id)a0;

- (id)initWithPBItem:(id)a0;
- (void)updateWithLiveGameCategoryInfo:(id)a0 fetchMore:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyFromPBItem:(id)a0;
- (void).cxx_destruct;

@end
