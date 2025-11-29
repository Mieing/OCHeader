@class NSString, IESECURLModel, IESECInnerFlowProductUIConfigModel, NSNumber;

@interface IESECInnerFlowProductBuyButtonModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long buttonType;
@property (retain, nonatomic) NSNumber *buttonStatus;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *orderURL;
@property (retain, nonatomic) IESECURLModel *icon;
@property (retain, nonatomic) IESECInnerFlowProductUIConfigModel *textUI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
