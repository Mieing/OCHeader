@class WCDataItem, WCAdSliderCardOpeningAnimationInfo, PAGView, NSString, WCAdURLImageView;
@protocol WCAdSliderCardOpeningAnimationViewDelegate;

@interface WCAdSliderCardOpeningAnimationView : MMUIView <PAGViewListener>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCAdSliderCardOpeningAnimationInfo *openingAnimationInfo;
@property (nonatomic) BOOL isDetail;
@property (retain, nonatomic) PAGView *animationPagView;
@property (retain, nonatomic) WCAdURLImageView *animationThumbView;
@property (nonatomic) BOOL hasPlayedFlag;
@property (nonatomic) BOOL isHideAnimating;
@property (nonatomic) BOOL finishedFlag;
@property (weak, nonatomic) id<WCAdSliderCardOpeningAnimationViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 isDetail:(BOOL)a2;
- (void)initView;
- (void)initPagView;
- (void)play;
- (void)hideWithAnimation;
- (BOOL)hasDisplayFinished;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)closeView;
- (void)onAnimationUpdate:(id)a0;
- (void)onAnimationEnd:(id)a0;
- (void)onAnimationCancel:(id)a0;
- (void).cxx_destruct;

@end
