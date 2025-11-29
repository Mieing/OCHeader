@class NSString, NSDictionary;

@interface WATransferJSAPIRuntimeModel : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *permissionAppID;
@property (copy, nonatomic) NSString *jsapiName;
@property (copy, nonatomic) NSDictionary *jsapiParams;
@property (copy, nonatomic) NSString *pageRelativePath;
@property (copy, nonatomic) NSString *pageQuery;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isService;
@property (nonatomic) unsigned long long wxaScene;

+ (id)fromEventHandler:(id)a0 jsapiParams:(id)a1 wxaScene:(unsigned long long)a2;

- (void).cxx_destruct;

@end
