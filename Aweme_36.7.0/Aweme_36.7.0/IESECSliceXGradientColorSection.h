@class UIColor, NSString;

@interface IESECSliceXGradientColorSection : IESECSliceXBaseModel <IESECSliceXJSONSerializing>

@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyKeyWithJSONKey;
+ (id)colorCustomTransformWithValue:(id)a0;

- (void).cxx_destruct;

@end
