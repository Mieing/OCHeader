@class NSString;

@interface IESLiveMultiAudioAvatarViewConfig : NSObject

@property (nonatomic) double avatarSideLength;
@property (nonatomic) double silenceViewTopRadius;
@property (nonatomic) double silenceViewHeight;
@property (nonatomic) double silenceViewTopOffset;
@property (nonatomic) double silenceViewCornerRadius;
@property (nonatomic) long long silenceViewStyle;
@property (nonatomic) BOOL is2DAvatar;
@property (copy, nonatomic) NSString *silenceViewName;
@property (nonatomic) double afkImageLength;
@property (nonatomic) double animationWidthOriginal;
@property (nonatomic) double animationHeightOriginal;
@property (nonatomic) double animationWidthNormal;
@property (nonatomic) double animationHeightNormal;
@property (nonatomic) double animationWidthGenderDiff;
@property (nonatomic) double animationHeightGenderDiff;
@property (nonatomic) double emojiViewSideLength;
@property (copy, nonatomic) NSString *startTalkingViewName;
@property (copy, nonatomic) NSString *loopTalkingViewName;
@property (nonatomic) BOOL disableSilenceView;
@property (nonatomic) BOOL disableEmojiView;
@property (nonatomic) BOOL disableTalkingView;
@property (nonatomic) BOOL audioThemeEnabled;
@property (nonatomic) BOOL shouldHideAvatar;

+ (id)multiAudioConfigWithAudioThemeEnabled:(BOOL)a0;
+ (id)ktvConfigWithSmallMode:(BOOL)a0 isFeed:(BOOL)a1;
+ (id)friendKTVConfigWithScaleMode:(BOOL)a0;
+ (id)acquaintanceShareVideoFeedConfigIsAnchor:(BOOL)a0 smallMode:(BOOL)a1;

- (void).cxx_destruct;

@end
