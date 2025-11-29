@class NSDictionary, NSString, NSArray;

@interface IESECSliceXAction : IESECSliceXBaseModel <IESECSliceXJSONSerializing>

@property (retain, nonatomic) NSDictionary *fieldsExprMap;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSDictionary *fields;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic) BOOL disable;
@property (retain, nonatomic) NSDictionary *originActionDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithDict:(id)a0 context:(id)a1;
+ (id)propertyKeyWithJSONKey;
+ (id)containerPropertyWithGenericClass;
+ (id)highPriorityExprKeys;
+ (void)initialize;

@end
