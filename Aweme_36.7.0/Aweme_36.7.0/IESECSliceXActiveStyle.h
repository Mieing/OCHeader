@class UIColor, NSString, IESECSliceXGradientColor, NSNumber;

@interface IESECSliceXActiveStyle : IESECSliceXBaseModel <IESECSliceXJSONSerializing>

@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) IESECSliceXGradientColor *bgGradientColor;
@property (retain, nonatomic) NSString *bgImage;
@property (retain, nonatomic) NSNumber *opacity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyKeyWithJSONKey;
+ (id)bgColorCustomTransformWithValue:(id)a0;

- (void).cxx_destruct;

@end
