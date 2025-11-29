@class NSString;

@interface QServerSetting : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL https;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *host_test;
@property (nonatomic) int status;

- (id)initWithDict:(id)a0;
- (id)getDomain;
- (id)checkHttpsString:(id)a0 useHttps:(BOOL)a1;
- (void).cxx_destruct;

@end
