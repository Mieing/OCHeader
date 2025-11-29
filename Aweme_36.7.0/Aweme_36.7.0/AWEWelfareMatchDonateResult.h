@class NSString;

@interface AWEWelfareMatchDonateResult : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long status;
@property (nonatomic) long long money;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
