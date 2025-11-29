@class NSString;

@interface CSJAdFileCacheConfig : NSObject

@property (copy, nonatomic) NSString *directoryName;
@property (nonatomic) long long maxFileCount;
@property (nonatomic) long long maxSize;
@property (copy, nonatomic) NSString *keyLog;

- (BOOL)valid;
- (void).cxx_destruct;
- (id)init;

@end
