@class NSString;

@interface AWEUserAccountCertInfoModel : MTLModel <MTLJSONSerializing, AWEUserVerifyInfoModelProtocol>

@property (nonatomic) BOOL isBizAccount;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) long long labelType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
