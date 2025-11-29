@class UIButton, NSString, UIImageView, CAShapeLayer, UIView, AWEPopoverActionSheet, UILabel;
@protocol AWEIMSearchResultCollectionViewCellTrackDelegate, AWEIMSearchResultCellItemProtocol, AWEIMStreakDisplayManagerProtocol;

@interface AWEIMSearchResultCollectionViewCell : UICollectionViewCell <AWEIMStreakDisplayManagerDelegate, AWEIMRendererProtocol>

@property (weak, nonatomic) AWEPopoverActionSheet *replyPopover;
@property (nonatomic) BOOL enableVideoWithDegrade;
@property (nonatomic) BOOL enableAudioWithDegrade;
@property (retain, nonatomic) id<AWEIMSearchResultCellItemProtocol> item;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *avatarContainerView;
@property (retain, nonatomic) CAShapeLayer *avatarImageMaskLayer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *prefixLabel;
@property (retain, nonatomic) UIView *onlineDotView;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIView *bottomLineNewThin;
@property (retain, nonatomic) UIView *bottomLineNewBold;
@property (retain, nonatomic) UIImageView *nextTapImageView;
@property (nonatomic) struct CGSize { double width; double height; } subTitleAttributextSize;
@property (retain, nonatomic) UIButton *rightReplyButton;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UIView *imStreakView;
@property (retain, nonatomic) UIImageView *aiAvatarTagView;
@property (copy, nonatomic) id /* block */ trackShowConsecutiveChatBlock;
@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
@property (nonatomic) BOOL shouldUseNewUI;
@property (weak, nonatomic) id<AWEIMSearchResultCollectionViewCellTrackDelegate> trackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)renderModel:(id)a0 context:(id)a1;
- (id)customIMStreakTextFont;
- (void)asyncDidUpdateIMStreakView;
- (BOOL)hitStreakUpdateExp;
- (id)attrForText:(id)a0 highlightRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 attr:(id)a2;
- (void)didTapLeftAvatarView;
- (void)didTapRightReplyButton;
- (void)p_configAvatarWithModel:(id)a0 context:(id)a1;
- (BOOL)isFormatSearchResult;
- (void)fetchFormatRealName:(id /* block */)a0;
- (id)attrForText:(id)a0 highlightInfo:(id)a1 attr:(id)a2;
- (void)p_fetchPeerUserIfNeed;
- (void)p_refreshConsecutiveChat;
- (void)p_refreshOnlineState;
- (void)p_refreshFormatTagStatus;
- (void)p_updateTimeTextFontSizeAndColor;
- (id)p_itemUniqueKey;
- (void)p_refreshStreakAttributedStringWithCacheKey:(id)a0;
- (void)p_refreshConsecutiveChatWithUniqueKey:(id)a0 conversation:(id)a1 streakAttributedStringCacheKey:(id)a2;
- (void)updateRightReplyButtonColor:(BOOL)a0;
- (void)p_configReplyPopoverActionSheetWithContext:(id)a0;
- (void)configAvatarImageForChat:(id)a0;
- (void)layoutSubviewsNew;
- (unsigned long long)getFromSceneWithItemShowSection:(long long)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToWindow:(id)a0;
- (void)layoutSubviews;
- (void)_setupUI;

@end
