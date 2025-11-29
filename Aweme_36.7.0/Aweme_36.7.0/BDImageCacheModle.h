@class NSString;

@interface BDImageCacheModle : NSObject

@property (copy, nonatomic) NSString *bizTag;
@property (nonatomic) unsigned long long imageCount;
@property (nonatomic) unsigned long long memoryCount;
@property (nonatomic) unsigned long long diskCount;

- (id)initWithBizTag:(id)a0;
- (id)dataFromParam;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
