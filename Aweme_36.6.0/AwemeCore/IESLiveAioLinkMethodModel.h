@class NSString, NSArray, NSMethodSignature;

@interface IESLiveAioLinkMethodModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *routerName;
@property (copy, nonatomic) NSString *protocolName;
@property (copy, nonatomic) NSString *methodName;
@property (copy, nonatomic) NSArray *paramsNames;
@property (copy, nonatomic) NSString *methodType;
@property (copy, nonatomic) NSString *selectorName;
@property (copy, nonatomic) NSString *returnName;
@property (nonatomic) BOOL usePBParam;
@property (nonatomic) BOOL useJsonParam;
@property (copy, nonatomic) NSString *paramName;
@property (retain, nonatomic) NSMethodSignature *signature;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *fallBackURL;
@property (nonatomic) long long hybridType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
