@class NSString;

@interface IESAccountCertStatusModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isVerified;
@property (nonatomic) long long certificationStep;
@property (nonatomic) long long reviewStatus;
@property (copy, nonatomic) NSString *resultPageUniformUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
