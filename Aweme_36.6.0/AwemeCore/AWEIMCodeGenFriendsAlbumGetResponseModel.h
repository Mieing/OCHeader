@class NSArray;

@interface AWEIMCodeGenFriendsAlbumGetResponseModel : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *mediaListModelArray;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
