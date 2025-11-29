@class NSArray;

@interface BDPPluginWhiteDomainConfig : NSObject

@property (copy, nonatomic) NSArray *request;
@property (copy, nonatomic) NSArray *upload;
@property (copy, nonatomic) NSArray *download;
@property (copy, nonatomic) NSArray *socket;
@property (copy, nonatomic) NSArray *webview;

+ (void)bootstrapLaunch;

- (id)domainListWithTypeStr:(id)a0;
- (void).cxx_destruct;

@end
