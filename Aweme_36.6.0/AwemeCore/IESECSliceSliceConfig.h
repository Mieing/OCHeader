@class NSString;

@interface IESECSliceSliceConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL clientScale;
@property (nonatomic) BOOL fontScale;
@property (nonatomic) double fontScaleMaxRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
