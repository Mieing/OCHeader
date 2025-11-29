@class NSTimer, UILabel;

@interface AWELiveLifeCountDownView : LynxUI

@property (nonatomic) long long currentTime;
@property (nonatomic) long long endTime;
@property (nonatomic) BOOL isFitFormatLength;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UILabel *label;

+ (id)__lynx_prop_config__290;
+ (id)__lynx_prop_config__521;

- (id)formatTime:(long long)a0 time:(long long)a1 isFitFormatLength:(BOOL)a2;
- (void)updateTime:(id)a0 requestReset:(BOOL)a1;
- (void)updateLabelUIStyle:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)createView;

@end
