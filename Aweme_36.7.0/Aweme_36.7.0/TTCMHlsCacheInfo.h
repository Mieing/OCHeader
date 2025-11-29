@class NSString;

@interface TTCMHlsCacheInfo : NSObject

@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *fileKey;
@property (nonatomic) long long expireTime;

- (void).cxx_destruct;
- (id)init;

@end
