@class NSString;

@interface IESLLPOICOIADInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *adExtraData;
@property (copy, nonatomic) NSString *adLogExtra;
@property (copy, nonatomic) NSString *adCreativeID;
@property (nonatomic) long long adSourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
