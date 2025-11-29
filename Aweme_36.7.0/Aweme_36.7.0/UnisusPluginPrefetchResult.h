@class NSString;

@interface UnisusPluginPrefetchResult : NSObject

@property (readonly, nonatomic) NSString *pluginId;
@property (nonatomic) BOOL hasPkg;
@property (nonatomic) unsigned long long durationMs;
@property (readonly, nonatomic) NSString *errMsg;

- (id)init:(void *)a0;
- (void).cxx_destruct;

@end
