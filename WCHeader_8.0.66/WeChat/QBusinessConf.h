@class NSArray;

@interface QBusinessConf : NSObject

@property (nonatomic) BOOL privacy_protection;
@property (retain, nonatomic) NSArray *http_proxy;

- (id)initWithDict:(id)a0;
- (void).cxx_destruct;

@end
