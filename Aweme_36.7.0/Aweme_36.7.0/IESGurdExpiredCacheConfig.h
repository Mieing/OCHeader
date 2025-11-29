@class NSString, NSDictionary;

@interface IESGurdExpiredCacheConfig : NSObject

@property (nonatomic) int expireAge;
@property (nonatomic) int cleanType;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSDictionary *channelsMap;

- (void).cxx_destruct;

@end
