@class UILabel, NSString;

@interface AWEPendantCapsuleView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSString *timeString;
@property (retain, nonatomic) NSString *fistStageString;
@property (retain, nonatomic) NSString *finishedStageString;
@property (retain, nonatomic) NSString *bgColor;
@property (retain, nonatomic) NSString *bdColor;
@property (retain, nonatomic) NSString *txtColor;
@property (nonatomic) BOOL needAdaptePad;

- (void)showOnView:(id)a0;
- (void)showOnNormalView:(id)a0;
- (void)playSwitchAnimationFromState:(unsigned long long)a0 toState:(unsigned long long)a1;
- (void)switchFromState:(unsigned long long)a0 toState:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
