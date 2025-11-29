@class NSArray, NSMutableArray, NSString;

@interface AFDAwemeFamiliarGroupModel : AWEBaseApiModel

@property (retain, nonatomic) NSMutableArray *itemList;
@property (retain, nonatomic) NSArray *idList;
@property (nonatomic) long long offset;
@property (nonatomic) long long total;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSString *folderID;
@property (retain, nonatomic) NSArray *localIdList;
@property (nonatomic) long long realCount;
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) BOOL hasLoadedMore;

+ (id)itemListJSONTransformer;
+ (id)idListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
