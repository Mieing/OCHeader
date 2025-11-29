@class NSString, IESECSliceXElementIterator, NSArray, IESECSliceXStyle, IESECSliceXActions, NSDictionary, IESECSliceXActiveStyle, IESECSliceXAction;

@interface IESECSliceXElement : IESECSliceXBaseModel <IESECSliceXJSONSerializing>

@property (retain, nonatomic) IESECSliceXElementIterator *iterator;
@property (retain, nonatomic) NSArray *originElements;
@property (nonatomic) BOOL notFirstUpdateUseProps;
@property (nonatomic) BOOL propsNoDiff;
@property (retain, nonatomic) NSDictionary *props;
@property (retain, nonatomic) NSDictionary *propsExprMap;
@property (retain, nonatomic) NSDictionary *attrsExprMap;
@property (retain, nonatomic) NSDictionary *storageExprMap;
@property (nonatomic) BOOL ttIf;
@property (retain, nonatomic) NSString *ttIfExpr;
@property (retain, nonatomic) IESECSliceXActiveStyle *activeStyle;
@property (retain, nonatomic) NSDictionary *frameAnimations;
@property (retain, nonatomic) NSDictionary *storage;
@property (copy, nonatomic) NSDictionary *previousData;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) IESECSliceXStyle *style;
@property (retain, nonatomic) NSDictionary *attrs;
@property (retain, nonatomic) NSArray *elements;
@property (retain, nonatomic) IESECSliceXAction *clickAction;
@property (retain, nonatomic) IESECSliceXAction *longClickAction;
@property (retain, nonatomic) IESECSliceXActions *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithDict:(id)a0 context:(id)a1;
+ (id)propertyKeyWithJSONKey;
+ (id)containerPropertyWithGenericClass;
+ (id)highPriorityModelKeys;
+ (id)frameAnimationsCustomTransformWithValue:(id)a0;
+ (void)initialize;

- (BOOL)continueUpdateModelAfterHighPriorityModelKeys;
- (void)refreshWithExtraData:(id)a0;
- (void).cxx_destruct;
- (void)refresh;
- (void)updateModelWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
