@class NSString;

@interface TTCMTsCacheInfo : NSObject

@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *fileKey;
@property (nonatomic) long long keyType;

- (void).cxx_destruct;
- (id)init;

@end
