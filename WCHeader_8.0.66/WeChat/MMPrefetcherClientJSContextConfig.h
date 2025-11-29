@class NSString;

@interface MMPrefetcherClientJSContextConfig : NSObject

@property (copy, nonatomic) NSString *contextName;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *manifestUrl;
@property (copy, nonatomic) NSString *appId;
@property (nonatomic) long long basePkgVersion;
@property (nonatomic) BOOL isAdPrefetcherContext;

- (void).cxx_destruct;

@end
