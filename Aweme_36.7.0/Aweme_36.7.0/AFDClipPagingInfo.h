@interface AFDClipPagingInfo : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;
@property (nonatomic) long long direction;

+ (id)JSONKeyPathsByPropertyKey;

@end
