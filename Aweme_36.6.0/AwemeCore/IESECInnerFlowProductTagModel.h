@class NSString, IESECInnerFlowProductUIConfigModel, IESECURLModel, NSDictionary, NSNumber;

@interface IESECInnerFlowProductTagModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) IESECInnerFlowProductUIConfigModel *UIConfig;
@property (retain, nonatomic) IESECURLModel *tagIcon;
@property (retain, nonatomic) IESECURLModel *prefixIcon;
@property (retain, nonatomic) IESECURLModel *suffixIcon;
@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSDictionary *trackParam;
@property (retain, nonatomic) NSNumber *tagType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)UIConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
