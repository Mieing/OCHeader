@interface AWEKVStorageHandlerConfiguration : NSObject

@property (nonatomic) long long cacheType;
@property (nonatomic) long long useModule;
@property (nonatomic) BOOL shouldRemoveAllWhenMemoryWarning;
@property (nonatomic) BOOL shouldRemoveAllWhenEnterBackground;
@property (nonatomic) unsigned long long memoryCountLimit;

- (id)init;

@end
