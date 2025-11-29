@class NSString;

@interface IESECPdpStdLynxConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL clientScale;
@property (nonatomic) BOOL fontScale;
@property (nonatomic) double floatScaleMaxRatio;
@property (copy, nonatomic) NSString *anchorContainer;
@property (copy, nonatomic) NSString *showDependsOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
