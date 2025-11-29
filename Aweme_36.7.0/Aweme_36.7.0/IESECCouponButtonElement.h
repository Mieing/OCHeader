@class IESECRadiusConfig, NSString, IESECTextWithIconElement, IESECImageModel;

@interface IESECCouponButtonElement : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECTextWithIconElement *prefix;
@property (retain, nonatomic) IESECTextWithIconElement *suffix;
@property (retain, nonatomic) IESECRadiusConfig *radius;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) IESECImageModel *tagHeaderIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
