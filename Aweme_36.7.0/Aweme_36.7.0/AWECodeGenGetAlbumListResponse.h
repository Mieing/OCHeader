@class NSArray;

@interface AWECodeGenGetAlbumListResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *albumListModelArray;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long offset;
@property (nonatomic) long long totalAlbumCount;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
