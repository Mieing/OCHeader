@class NSString, IESECURLModel;

@interface IESECVideoMarketingRedPacketToastModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) IESECURLModel *iconModel;
@property (copy, nonatomic) NSString *resultType;
@property (copy, nonatomic) NSString *benefitType;
@property (copy, nonatomic) NSString *trackParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
