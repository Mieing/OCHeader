@class WCAdRandomPickCardInfo, NSString, UILabel, WCAdURLImageView;
@protocol WCAdRandomPickCardDescriptionViewDelegate;

@interface WCAdRandomPickCardDescriptionView : MMUIView <CAAnimationDelegate>

@property (retain, nonatomic) WCAdRandomPickCardInfo *randomPickCardInfo;
@property (weak, nonatomic) id<WCAdRandomPickCardDescriptionViewDelegate> delegate;
@property (nonatomic) long long viewStatus;
@property (retain, nonatomic) WCAdURLImageView *titleIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) WCAdURLImageView *introduceTitleIconView;
@property (retain, nonatomic) UILabel *introduceTitleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *introduceDescLabel;
@property (retain, nonatomic) UILabel *doneTitleLabel;
@property (retain, nonatomic) UILabel *doneDescLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calcViewHeightForPickCardInfo:(id)a0 maxWidth:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 randomPickCardInfo:(id)a1 delegate:(id)a2;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)fetchIntroduceDescText;
- (id)fetchDoneDescText;
- (id)generateSimpleLabelWithFont:(id)a0 textColor:(id)a1 text:(id)a2;
- (void)updateRandomPickCardInfo:(id)a0;
- (void)resetDescriptionView;
- (void)updateViewStateForAnimation;
- (void)updateViewWithStatus:(long long)a0;
- (id)generateSimpleOpacityAnimationFrom:(double)a0 mid:(double)a1 to:(double)a2 duration:(double)a3 completionBlock:(id /* block */)a4;
- (void)removeAllLayersAnimations;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
