@class NSString, ACCRecordMode;

@interface ACCLightningRecordLightGrayBackgroundView : UIView <ACCLightningRecordAnimatable>

@property (nonatomic) long long state;
@property (retain, nonatomic) ACCRecordMode *recordMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)normalWidth;

- (double)realScale;
- (void)updateWithLivePhotoEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)startAlphaAnimationIfNeeded:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
