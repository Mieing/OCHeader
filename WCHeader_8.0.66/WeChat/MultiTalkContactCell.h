@class UILabel, WCVideoRender, ColorGradientView, NSMutableArray, UIView, MMUILabel, MultiTalkHDHeadView, MMTimer, NSString, CContact, MultiTalkMuteIconView, MultiTalkSharingScreenTipsView, UIImageView;
@protocol MultiTalkContactCellDelegate;

@interface MultiTalkContactCell : UIView <MultiTalkMemberExt, MultiTalkMemberWaittingExt>

@property (retain, nonatomic) MultiTalkHDHeadView *m_headImageView;
@property (retain, nonatomic) CContact *m_contact;
@property (retain, nonatomic) WCVideoRender *m_render;
@property (retain, nonatomic) UIImageView *m_talkingImageView;
@property (retain, nonatomic) UIImageView *m_waittingImageView;
@property (retain, nonatomic) UIImageView *m_netQualityImageView;
@property (retain, nonatomic) NSMutableArray *m_waittingImageList;
@property (retain, nonatomic) UILabel *m_busyLabel;
@property (retain, nonatomic) MultiTalkMuteIconView *m_muteIconView;
@property (retain, nonatomic) MultiTalkSharingScreenTipsView *m_screenSharingTipsView;
@property (nonatomic) BOOL m_hasShowTipsView;
@property (retain, nonatomic) UIView *m_videoTipsView;
@property (retain, nonatomic) MMTimer *m_videoTipsVideoTimer;
@property (nonatomic) BOOL m_highlighted;
@property (nonatomic) BOOL m_renderDisplay;
@property (nonatomic) BOOL m_highlightAnimating;
@property (nonatomic) BOOL m_hasHighlightAnimationTodo;
@property (retain, nonatomic) MMUILabel *memberNameLabel;
@property (retain, nonatomic) MMUILabel *callerMemberNameLabel;
@property (retain, nonatomic) ColorGradientView *blurView;
@property (weak, nonatomic) id<MultiTalkContactCellDelegate> m_delegate;
@property (retain, nonatomic) UIView *m_backgroundMaskView;
@property (nonatomic) BOOL m_showBigview;
@property (nonatomic) BOOL m_needRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showBusyLabel;
- (void)hideBusyLabel;
- (void)showRenderView:(id)a0;
- (void)hideRender;
- (void)showMuteIcon;
- (void)hideMuteIcon;
- (void)internalHighlightStautsUpdate;
- (void)statusHighlighted:(BOOL)a0;
- (void)showScreenSharingTips;
- (void)hideScreenSharingTips;
- (void)updateRender:(id)a0;
- (void)updateRenderDisplayStatus:(BOOL)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateAccessibility;
- (void)onSingleTap;
- (void)initBackgroundMaskView;
- (void)initTalkingImageView;
- (void)initNetQualityImageView;
- (void)initBusyLabel;
- (void)initMuteIconView;
- (void)initHeadImageView;
- (void)initWaittingImageView;
- (void)initScreenSharingTipsView;
- (void)initUserNameLabel;
- (void)updateContact:(id)a0 callerName:(id)a1;
- (void)onMultiTalkMemberWaittingTimerCheckWithIndex:(unsigned long long)a0;
- (void)onMultiTalkMemberTalking;
- (void)onMultiTalkMemberSilent;
- (void)onMultiTalkMemberQualityChange:(unsigned int)a0;
- (void).cxx_destruct;

@end
