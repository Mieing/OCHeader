@class NSTimer, AFECircularView, NSString;
@protocol DTFFaceViewDelegate;

@interface DTFFaceView : UIView <IStatusBarDelegate, AFECircularViewProtocol, DTFFaceViewProtocol>

@property (retain, nonatomic) NSTimer *tipsTimer;
@property (retain, nonatomic) AFECircularView *circularView;
@property (copy, nonatomic) NSString *tips;
@property (copy, nonatomic) NSString *timeString;
@property (copy, nonatomic) NSString *guide;
@property (nonatomic) long long authScene;
@property (retain, nonatomic) NSString *platformInfo;
@property (nonatomic) BOOL isSuitable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DTFFaceViewDelegate> delegate;

- (void)setSuitableType:(BOOL)a0;
- (void)setPhotinusColor:(id)a0;
- (void)showBlurImage:(id)a0;
- (void)faceDectectComplete;
- (void)playBtn:(id)a0;
- (void)onButtonCancel;
- (id)initWithAuthScene:(long long)a0 platformInfo:(id)a1 isSuitable:(BOOL)a2;
- (id)initWithAuthScene:(long long)a0;
- (void)onTipsTimer;
- (void)setScreenRotation:(BOOL)a0;
- (void)setPlayBtnIcon;
- (void)handleFaceStateChange:(long long)a0 stateTips:(id)a1 actionGuide:(id)a2 actionGuideType:(long long)a3 progress:(double)a4 extInfo:(id)a5;
- (void).cxx_destruct;
- (id)view;
- (void)layoutSubviews;
- (void)setPreviewLayer:(id)a0;

@end
