@class NSArray;

@interface AWELVideoLibraryResultResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *albumList;
@property (nonatomic) long long limit;
@property (nonatomic) long long offset;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long miniappOffset;

+ (id)albumListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
