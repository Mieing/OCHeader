@class UIView, FinderObjectPlaceHolderInfo, WCFinderFeedContentVM, NSString, UIImageView, WCFinderDataItem, WCFinderSimplePlayerView, WCFinderAuthInfoIconView, RichTextView, WCFinderRichTextView, WCFinderHeadImageView, WCFinderGradientView;
@protocol WCFinderLeadToMachineTableViewCellDelegate;

@interface WCFinderLeadToMachineTableViewCell : WCFinderTableViewCell <WCFinderFeedContentMediaActionProtocol, WCFinderFocusCellProtocol>

@property (retain, nonatomic) WCFinderRichTextView *completeTitleView;
@property (retain, nonatomic) UIView *leadToMachineContainerView;
@property (retain, nonatomic) WCFinderRichTextView *leadToMachineTipsLabel;
@property (retain, nonatomic) UIImageView *leadToMachineArrowIcon;
@property (retain, nonatomic) UIView *playerContainerView;
@property (retain, nonatomic) WCFinderSimplePlayerView *playerView;
@property (retain, nonatomic) WCFinderHeadImageView *headImgView;
@property (retain, nonatomic) RichTextView *nicknameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) WCFinderGradientView *gradientView;
@property (retain, nonatomic) RichTextView *continueScrollTipsView;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) WCFinderDataItem *playItem;
@property (nonatomic) struct CGSize { double width; double height; } layoutSize;
@property (nonatomic) double currentPlayPosition;
@property (retain, nonatomic) FinderObjectPlaceHolderInfo *placeHolderInfo;
@property (weak, nonatomic) id<WCFinderLeadToMachineTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportFailToExposeWithCommentScene:(int)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)updateWithPlaceholderInfo:(id)a0 playItem:(id)a1;
- (void)updateWithPlaceholderInfo:(id)a0 playItem:(id)a1 contentVM:(id)a2;
- (void)updateUIStyle;
- (id)completeTitleContentWith:(id)a0;
- (void)updateWithPlayItem:(id)a0;
- (void)setEmptyState;
- (void)setSubviewsHidden:(BOOL)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutEnableDiscoveryFinderUI;
- (void)pauseVideo:(BOOL)a0;
- (void)layoutGeneralUI;
- (void)reportEvent:(id)a0 withNextFeedID:(id)a1 commentScene:(int)a2;
- (BOOL)shouldCaluculateAsFocusCell;
- (BOOL)currentMediaIsPlay;
- (void)playVideoIfSupport:(double)a0 silencePlay:(BOOL)a1;
- (void)stopVideoIfSupport;
- (void)pauseMediaPlayShowPauseBtn:(BOOL)a0;
- (void)onVideoUpdatePosition:(double)a0 videoDuration:(double)a1 maxPlayVideoTime:(double)a2;
- (void)onPlayerStateChanged:(unsigned long long)a0;
- (void).cxx_destruct;

@end
