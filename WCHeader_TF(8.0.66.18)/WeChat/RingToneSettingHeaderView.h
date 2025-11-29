@class UIView, NSString, RingToneDetail, UIButton, RingToneToolView, MMUILabel, RingToneImageView, SightIconView;
@protocol RingToneSettingHeaderViewDelegate;

@interface RingToneSettingHeaderView : UIView <RingToneToolActionResponder, RingTonePlayerExt>

@property (retain, nonatomic) UIView *ringCardView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *authorLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIButton *addExclusiveFriendButton;
@property (retain, nonatomic) RingToneToolView *toolView;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) RingToneDetail *ring;
@property (retain, nonatomic) SightIconView *playImageView;
@property (retain, nonatomic) RingToneImageView *coverImageView;
@property (retain, nonatomic) UIButton *defaultLabel;
@property (nonatomic) int layoutScene;
@property (retain, nonatomic) UIButton *backgroundButton;
@property (weak, nonatomic) id<RingToneSettingHeaderViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)DefaultHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)layoutViewWithScene:(int)a0 isDefault:(BOOL)a1;
- (void)initView;
- (void)changeToMinimize:(BOOL)a0;
- (void)changeToMaximize;
- (void)layoutNewStackView;
- (void)loadDefaultRing;
- (void)loadInvalidRing;
- (void)loadRingDetail:(id)a0;
- (void)setTipWhenHasExclusiveRing:(BOOL)a0;
- (void)initExclusiveRingViews;
- (void)onAddButtonTap;
- (void)onTapRingCardView;
- (void)resetToDefault;
- (void)stopAllPlay;
- (void)playWithID:(id)a0;
- (void).cxx_destruct;

@end
