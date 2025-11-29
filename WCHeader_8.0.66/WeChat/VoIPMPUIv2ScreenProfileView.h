@class CContact, VoIPMPUIv2ImageView, MultiTalkHDHeadView;

@interface VoIPMPUIv2ScreenProfileView : VoIPMPUIv2View

@property (nonatomic) unsigned long long splitLocation;
@property (nonatomic) BOOL isCleared;
@property (nonatomic) BOOL isTalking;
@property (nonatomic) BOOL isFloated;
@property (nonatomic) BOOL isFold;
@property (retain, nonatomic) VoIPMPUIv2ImageView *blurView;
@property (retain, nonatomic) MultiTalkHDHeadView *headImageView;
@property (nonatomic) double subviewsScale;
@property (nonatomic) double panelHeight;
@property (nonatomic) BOOL isSplit;
@property (nonatomic) BOOL isMiniInAppActived;
@property (nonatomic) BOOL isSplitPrepartion;
@property (retain, nonatomic) CContact *contact;

- (void)layoutBlurView;
- (void)layoutHeadView;
- (void)layoutBackground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
