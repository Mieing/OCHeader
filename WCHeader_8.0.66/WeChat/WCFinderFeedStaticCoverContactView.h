@class WCFinderContact, FavAttributeCPLabel, WCFinderHeadImageView, WCFinderAuthInfoIconView, WCFinderMaskButton, WCFinderLiveNowView, UILabel;
@protocol WCFinderFeedStaticCoverContactViewDelegate;

@interface WCFinderFeedStaticCoverContactView : UIView

@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) FavAttributeCPLabel *nicknameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (retain, nonatomic) WCFinderLiveNowView *liveNowView;
@property (retain, nonatomic) WCFinderMaskButton *privateMsgBtn;
@property (retain, nonatomic) UILabel *reasonLabel;
@property (nonatomic) unsigned long long styleMode;
@property (retain, nonatomic) WCFinderContact *contact;
@property (weak, nonatomic) id<WCFinderFeedStaticCoverContactViewDelegate> delegate;
@property (nonatomic) BOOL alwaysHideLiveNowView;

+ (double)defaultHeight;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)updateContentWithContact:(id)a0;
- (void)updateContentWithContact:(id)a0 highlightWords:(id)a1;
- (void)updateContentWithContact:(id)a0 highlightWords:(id)a1 isShowPrivateMsgStyle:(BOOL)a2 displayReason:(id)a3;
- (void)useTaskBarStyle;
- (void)renderNickNameLabel:(id)a0 highlightWords:(id)a1;
- (double)calNickNameMaxWidth:(id)a0 isTaskBarStyle:(BOOL)a1;
- (void)updateLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)adjustMargin;
- (void)switchUIMode:(unsigned long long)a0;
- (void)didClickPrivateMsgBtn:(id)a0;
- (void).cxx_destruct;

@end
