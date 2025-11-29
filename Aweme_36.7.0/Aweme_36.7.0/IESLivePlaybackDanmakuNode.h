@class NSString, NSArray, HTSLiveImage, NSAttributedString, UIImage, GPBMessage, NSNumber, UIColor;

@interface IESLivePlaybackDanmakuNode : IESLiveDanmakuNode <IESLivePlaybackDanmakuNodeProtocol>

@property (copy, nonatomic) NSArray *textColors;
@property (retain, nonatomic) NSArray *giftColorConfigs;
@property (nonatomic) double avatarImageSize;
@property (nonatomic) BOOL animationComplete;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSArray *roleURLListArray;
@property (nonatomic) BOOL isCurrentLoginUserGiftDanmaku;
@property (retain, nonatomic) NSArray *slicedContent;
@property (nonatomic) double danmakuLineHeight;
@property (nonatomic) double animatedEmojiHeight;
@property (copy, nonatomic) NSString *jumpSchema;
@property (retain, nonatomic) GPBMessage *message;
@property (nonatomic) double avatarBadgeSize;
@property (retain, nonatomic) HTSLiveImage *avatarBadge;
@property (nonatomic) BOOL showAvatarBadge;
@property (nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (nonatomic) BOOL showBackgroundColorGradient;
@property (nonatomic) BOOL pinModeRequired;
@property (nonatomic) double outerStrokeWidth;
@property (nonatomic) double outerStrokeColorAlpha;
@property (nonatomic) double giftImageSize;
@property (nonatomic) double danmakuHeight;
@property (copy, nonatomic) NSArray *giftImageURLs;
@property (nonatomic) unsigned long long comboCount;
@property (nonatomic) unsigned long long groupCount;
@property (nonatomic) unsigned long long giftPrice;
@property (retain, nonatomic) UIColor *fullScreenColor;
@property (retain, nonatomic) NSArray *medalURLs;
@property (nonatomic) double alpha;
@property (nonatomic) double scale;
@property (nonatomic) long long priority;
@property (retain, nonatomic) NSNumber *contentID;
@property (copy, nonatomic) NSString *secUserID;
@property (retain, nonatomic) id userID;
@property (nonatomic) long long chatType;
@property (retain, nonatomic) NSString *userLevel;
@property (retain, nonatomic) NSAttributedString *userName;
@property (retain, nonatomic) NSArray *avatarURLs;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *contentTextColor;
@property (nonatomic) BOOL showContentBorder;
@property (retain, nonatomic) NSAttributedString *content;
@property (copy, nonatomic) NSArray *backgroundColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nodeWithMessage:(id)a0 emoticonParser:(id)a1 danmakuSetting:(id)a2 context:(id)a3;

- (BOOL)showNickname;
- (BOOL)isStarComment;
- (id)userName:(id)a0 limitWithLength:(long long)a1;
- (BOOL)sendByCurrentUser;
- (BOOL)showHeadImage;
- (BOOL)isDouPlusCreateMsg;
- (BOOL)officialMessage;
- (id)renderTextColors;
- (id)renderAvatarUrls;
- (BOOL)showTextColor;
- (BOOL)showBackgroundColor;
- (BOOL)localMessage;
- (BOOL)welcomeMessage;
- (void)setupShowChatMessageWithEmoticonParser:(id)a0 danmakuSetting:(id)a1;
- (void)setupWelcomeMessageWithEmoticonParser:(id)a0 danmakuSetting:(id)a1;
- (BOOL)showMedalImage;
- (id)colorsFromColorStrArray:(id)a0;
- (id)giftDanamkuTextColorArrayForGiftNode:(id)a0;
- (void).cxx_destruct;
- (id)commentType;
- (BOOL)touchable;

@end
