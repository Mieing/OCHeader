@interface IWKPluginHandleResultObj : NSObject

@property (nonatomic) unsigned long long flow;
@property (retain, nonatomic) id value;
@property (nonatomic) BOOL ignoreMonitor;

+ (id)break;
+ (id)returnValue:(id)a0;
+ (id)returnYES;
+ (id)returnNO;
+ (id)continue;

- (void).cxx_destruct;

@end
