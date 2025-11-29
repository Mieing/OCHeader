@interface AWEFlashModeSwitchButton : ACCAnimatedButton

@property (nonatomic) long long currentFlashMode;

- (void)switchFlashMode:(long long)a0;
- (id)iconImageForFlashMode:(long long)a0;
- (id)flashModeIconImageMap;
- (id)accessibilityLabel;
- (id)initWithType:(unsigned long long)a0;

@end
