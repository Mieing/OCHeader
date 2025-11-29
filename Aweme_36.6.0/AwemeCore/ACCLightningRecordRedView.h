@class UIColor, ACCRecordMode, NSString;

@interface ACCLightningRecordRedView : UIView <ACCLightningRecordAnimatable>

@property (nonatomic) BOOL isMainRecorderPage;
@property (nonatomic) BOOL hideWhenRecording;
@property (retain, nonatomic) UIColor *idleColor;
@property (nonatomic) long long state;
@property (retain, nonatomic) ACCRecordMode *recordMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cinemaModeWidth;

- (double)realScale;
- (void)mainRecorderPageEnter;
- (void)startScaleAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
