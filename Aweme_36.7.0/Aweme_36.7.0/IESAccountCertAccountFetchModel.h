@class NSString, NSDictionary;

@interface IESAccountCertAccountFetchModel : MTLModel <MTLJSONSerializing, TTAccountXBridgeAccountFetchModelProtocol>

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *header;
@property (copy, nonatomic) NSString *callbackSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
