@class NSString;

@interface UnisusPluginLoadMetric : NSObject

@property (readonly, nonatomic) NSString *pluginId;
@property (readonly, nonatomic) NSString *version;
@property (nonatomic) unsigned long long startUs;
@property (nonatomic) unsigned long long readEndUs;
@property (nonatomic) unsigned long long endUs;
@property (nonatomic) BOOL complete;
@property (nonatomic) BOOL succ;
@property (readonly, nonatomic) NSString *errMsg;
@property (nonatomic) BOOL async;

- (id)init:(const void *)a0;
- (void).cxx_destruct;

@end
