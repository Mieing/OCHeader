@class NSString, NSNumber;

@interface IESECInnerFlowProductUIConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *textBackgroundColor;
@property (copy, nonatomic) NSString *textBorderColor;
@property (retain, nonatomic) NSNumber *weight;
@property (retain, nonatomic) NSNumber *textSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
