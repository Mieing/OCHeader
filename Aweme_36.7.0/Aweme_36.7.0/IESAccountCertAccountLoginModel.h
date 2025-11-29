@class NSString, NSDictionary;

@interface IESAccountCertAccountLoginModel : MTLModel <MTLJSONSerializing, TTAccountXBridgeAccountLoginModelProtocol>

@property (copy, nonatomic) NSString *loginMethod;
@property (copy, nonatomic) NSDictionary *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
