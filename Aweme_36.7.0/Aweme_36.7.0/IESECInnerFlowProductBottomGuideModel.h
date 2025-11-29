@class NSString, IESECURLModel;

@interface IESECInnerFlowProductBottomGuideModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) IESECURLModel *prefixIcon;
@property (retain, nonatomic) IESECURLModel *suffixIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
