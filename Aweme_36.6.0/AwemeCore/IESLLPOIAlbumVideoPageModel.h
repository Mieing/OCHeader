@class NSString, NSMutableArray;

@interface IESLLPOIAlbumVideoPageModel : IESLLifeBaseApiModel

@property (nonatomic) long long nextPage;
@property (retain, nonatomic) NSMutableArray *awemeList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *backendType;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
