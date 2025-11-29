@class NSString;

@interface MBPluginInfo : NSObject

@property (copy, nonatomic) NSString *alias;
@property (copy, nonatomic) NSString *provider;
@property (copy, nonatomic) NSString *version;

- (id)description;
- (void).cxx_destruct;

@end
