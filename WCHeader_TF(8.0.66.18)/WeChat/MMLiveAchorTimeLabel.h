@class NSString, UIImageView, MMTimerLabel, MMLiveAnchorExceptionCheckManager;

@interface MMLiveAchorTimeLabel : MMLiveBaseComponentView <MMLiveAnchorExceptionCheckDelegate> {
    MMLiveAnchorExceptionCheckManager *_anchorExceptionCheckManager;
    id /* block */ _anchorExceptionCheckActionWithTypeBlock;
}

@property (nonatomic) long long currentNetWorkState;
@property (readonly, nonatomic) UIImageView *networkStateImageView;
@property (retain, nonatomic) MMTimerLabel *timerLabel;
@property (nonatomic) BOOL timerLabelNeedsResize;
@property (readonly, nonatomic) MMLiveAnchorExceptionCheckManager *anchorExceptionCheckManager;
@property (copy, nonatomic) id /* block */ onLiveQualityUpdatedBlock;
@property (copy, nonatomic) id /* block */ onCameraCastConnectionChangedBlock;
@property (copy, nonatomic) id /* block */ onTimeLabelSizeDidChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)networkImageForState:(long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1 componentKey:(id)a2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutNetworkStateImageView;
- (void)layoutTimerLabel;
- (void)sizeToFits;
- (double)iconInnerPadding;
- (double)regularWidth;
- (void)onEnterLive;
- (void)onLivePaused;
- (void)onLiveResumed;
- (void)onLiveProgressUpdated:(unsigned int)a0;
- (void)onLiveQualityUpdated:(id)a0;
- (void)onCameraCastConnectionChanged:(BOOL)a0;
- (void)checkAchorLiveUnNormal:(unsigned int)a0;
- (id)finderLiveTaskId;
- (id)finderLiveTask;
- (void)anchorExceptionCheckActionWithType:(unsigned long long)a0 isShow:(BOOL)a1;
- (void)cancelAnchorExceptionCheckActionWithType:(unsigned long long)a0;
- (void)setAnchorExceptionCheckActionWithTypeBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
