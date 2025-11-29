@class HardDevice, HardDeviceAttr;

@interface ModHardDevice : WXPBGeneratedMessage

@property (retain, nonatomic) HardDevice *hardDevice;
@property (retain, nonatomic) HardDeviceAttr *hardDeviceAttr;
@property (nonatomic) unsigned int bindFlag;

+ (void)initialize;

- (void)setBindFlag:(unsigned int)a0;
- (unsigned int)bindFlag;
- (void)setHardDeviceAttr:(id)a0;
- (id)hardDeviceAttr;
- (void)setHardDevice:(id)a0;
- (id)hardDevice;

@end
