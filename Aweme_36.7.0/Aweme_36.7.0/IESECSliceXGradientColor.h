@class NSArray, NSString;

@interface IESECSliceXGradientColor : IESECSliceXBaseModel <IESECSliceXJSONSerializing>

@property (nonatomic) double degree;
@property (retain, nonatomic) NSArray *colors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyKeyWithJSONKey;
+ (id)containerPropertyWithGenericClass;

- (void).cxx_destruct;

@end
