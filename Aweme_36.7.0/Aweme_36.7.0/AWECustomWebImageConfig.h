@interface AWECustomWebImageConfig : NSObject

@property (nonatomic) BOOL clearMemoryOnMemoryWarning;
@property (nonatomic) BOOL clearMemoryWhenEnteringBackground;
@property (nonatomic) BOOL shouldUseWeakMemoryCache;
@property (nonatomic) unsigned long long memoryCountLimit;
@property (nonatomic) unsigned long long memorySizeLimit;
@property (nonatomic) unsigned long long memoryAgeLimit;
@property (nonatomic) BOOL trimDiskWhenEnteringBackground;
@property (nonatomic) unsigned long long diskCountLimit;
@property (nonatomic) unsigned long long diskSizeLimit;
@property (nonatomic) unsigned long long diskAgeLimit;

- (id)init;

@end
