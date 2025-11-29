@class NSURL;

@interface VEExternalCache : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSURL *cachePath;
@property (nonatomic) long long mediaSize;

- (void).cxx_destruct;
- (id)init;

@end
