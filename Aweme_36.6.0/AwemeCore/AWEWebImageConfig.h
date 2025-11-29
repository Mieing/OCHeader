@interface AWEWebImageConfig : NSObject

@property (nonatomic) BOOL isBizPrefetchRequest;
@property (nonatomic) BOOL enableInsulatedCacheType;
@property (nonatomic) long long insulatedCacheType;

- (id)init;

@end
