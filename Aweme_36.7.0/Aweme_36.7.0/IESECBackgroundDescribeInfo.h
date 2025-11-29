@class IESECRadiusConfig, IESECBorderConfig, NSString, IESECPaddingConfig, IESECImageModel, IESECGradientInfo;

@interface IESECBackgroundDescribeInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECGradientInfo *gradientInfo;
@property (retain, nonatomic) IESECRadiusConfig *radius;
@property (retain, nonatomic) IESECPaddingConfig *padding;
@property (retain, nonatomic) IESECBorderConfig *border;
@property (copy, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) IESECImageModel *backgroundImage;
@property (copy, nonatomic) NSString *maskColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
