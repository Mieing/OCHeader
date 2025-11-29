@class NSString, MMLiveBeautyItem, MMWeEffectManager;

@interface MMLiveBeautyDriver : NSObject <MMLiveBeautyDriving>

@property (weak, nonatomic) MMWeEffectManager *effectManagerStorage;
@property (weak, nonatomic) MMWeEffectManager *effectManager;
@property (retain, nonatomic) MMLiveBeautyItem *beautyItem;
@property (readonly, nonatomic) double normalizedValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isDriverSupported:(id)a0;
+ (Class)driverClassForName:(id)a0;

@end
