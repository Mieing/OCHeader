@class MMFinderLiveNumberAnimationLogic, FinderLiveProductHintAnimationInfo, NSString, MMFinderLiveTaskId, UILabel, MMGradientView, PAGImageView;
@protocol MMFinderLiveECHotSaleLikeAnimationViewDelegate;

@interface MMFinderLiveECHotSaleLikeAnimationView : UIView <MMFinderLiveNumberAnimationLogicObserver>

@property (retain, nonatomic) MMGradientView *backgroundView;
@property (retain, nonatomic) PAGImageView *pagView;
@property (retain, nonatomic) UILabel *prefixLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) MMFinderLiveNumberAnimationLogic *numberAnimationLogic;
@property (retain, nonatomic) FinderLiveProductHintAnimationInfo *animationInfo;
@property (nonatomic) unsigned long long productID;
@property (nonatomic) BOOL hasFinishedEnter;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (weak, nonatomic) id<MMFinderLiveECHotSaleLikeAnimationViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnimationInfo:(id)a0 taskID:(id)a1 productID:(unsigned long long)a2;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)didFinishEnter;
- (void)changeNumberWithLogic:(id)a0;
- (void)finishWithLogic:(id)a0;
- (void).cxx_destruct;

@end
