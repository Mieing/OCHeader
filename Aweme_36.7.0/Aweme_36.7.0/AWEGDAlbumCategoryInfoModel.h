@class NSString, NSMutableArray, NSArray;

@interface AWEGDAlbumCategoryInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabID;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long nextOffset;
@property (nonatomic) long long nextPage;
@property (retain, nonatomic) NSMutableArray *photoInfos;
@property (copy, nonatomic) NSArray *photoInfosString;
@property (nonatomic) long long tabIndex;

+ (id)photoInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
