@class CJPayDeviceConfig;

@interface CJPayDeviceOptConfig : JSONModel

@property (retain, nonatomic) CJPayDeviceConfig *lowDeviceConfig;
@property (retain, nonatomic) CJPayDeviceConfig *middleDeviceConfig;
@property (retain, nonatomic) CJPayDeviceConfig *highDeviceConfig;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
