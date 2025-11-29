@interface AWEClientAIAwemeVideoSizeCache : NSObject

@property (nonatomic) long long cachedSize;
@property (nonatomic) long long expiredTime;

- (id)initWithCachedSize:(long long)a0;
- (BOOL)isValid;

@end
