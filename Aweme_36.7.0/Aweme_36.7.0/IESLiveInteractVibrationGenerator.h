@class IESLiveGCDTimer;

@interface IESLiveInteractVibrationGenerator : NSObject

@property (retain, nonatomic) IESLiveGCDTimer *timer;

- (void)triggerVibrationWithConfig:(id)a0;
- (unsigned int)getSystemVibrationIdWithVibrationType:(long long)a0;
- (long long)getFeedBackStyleWithVibrationType:(long long)a0;
- (void).cxx_destruct;

@end
