@class NSArray, IESECSliceXScrollAction, NSString, IESECSliceXAction;

@interface IESECSliceXActions : IESECSliceXBaseModel <IESECSliceXJSONSerializing>

@property (retain, nonatomic) NSArray *onExposure;
@property (retain, nonatomic) IESECSliceXAction *onFocus;
@property (retain, nonatomic) IESECSliceXAction *onBlur;
@property (retain, nonatomic) IESECSliceXAction *onWillChange;
@property (retain, nonatomic) IESECSliceXAction *onChange;
@property (retain, nonatomic) IESECSliceXAction *onSuffix;
@property (retain, nonatomic) IESECSliceXScrollAction *onScroll;
@property (retain, nonatomic) IESECSliceXAction *onTick;
@property (retain, nonatomic) IESECSliceXAction *onFinish;
@property (retain, nonatomic) IESECSliceXAction *onTransitionStart;
@property (retain, nonatomic) IESECSliceXAction *onTransitionEnd;
@property (retain, nonatomic) IESECSliceXAction *onAnimationStart;
@property (retain, nonatomic) IESECSliceXAction *onAnimationEnd;
@property (retain, nonatomic) IESECSliceXAction *onShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyKeyWithJSONKey;
+ (id)containerPropertyWithGenericClass;

- (void).cxx_destruct;
- (void)updateModelWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
