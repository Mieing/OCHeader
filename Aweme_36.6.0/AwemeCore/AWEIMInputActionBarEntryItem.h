@class NSAttributedString, UIImage, AWEIMEmoticonModel, NSValue, NSString, NSDictionary, AWEIMMessage, AWEIMActionBarButtonConfig, NSMutableArray, AWEIMActionBarShowInfo;

@interface AWEIMInputActionBarEntryItem : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL showTitleOnly;
@property (nonatomic) BOOL isEmojiQuickReply;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) AWEIMEmoticonModel *emoticonModel;
@property (retain, nonatomic) AWEIMActionBarButtonConfig *buttonConfig;
@property (retain, nonatomic) AWEIMActionBarShowInfo *resolvedShowInfo;
@property (retain, nonatomic) NSValue *cropValue;
@property (copy, nonatomic) NSDictionary *resolvedShowInfoResourceConfigs;
@property (nonatomic) BOOL voip2In1ShowAsVideoVoip;
@property (copy, nonatomic) NSAttributedString *emojiTextAttributedString;
@property (copy, nonatomic) NSString *customDeduplicationKey;
@property (nonatomic) BOOL isDynamicallyInsertedLightInteractionReply;
@property (retain, nonatomic) AWEIMMessage *bindedMessage;
@property (retain, nonatomic) NSValue *itemSizeValue;
@property (retain, nonatomic) NSValue *attributedTitleSize;
@property (nonatomic) unsigned long long routerType;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL showIconOnly;
@property (nonatomic) BOOL doNotUseTintColor;
@property (nonatomic) BOOL dismissAfterUse;
@property (nonatomic) unsigned long long aweType;
@property (retain, nonatomic) NSMutableArray *allValidShowInfos;
@property (retain, nonatomic) NSMutableArray *unusedValidShowInfos;
@property (nonatomic) BOOL shouldNotAllowClickFrequently;
@property (nonatomic) double lastClickTimestamp;
@property (nonatomic) double minClickTimeInterval;

- (id)darkIconUrl;
- (id)lightIconUrl;
- (id)titleColorDark;
- (id)titleColorWithBackgroundImage;
- (id)titleColorDarkWithBackgroundImage;
- (id)backgroundColorWithBackgroundImage;
- (id)backgroundColorDarkWithBackgroundImage;
- (void)p_setup;
- (double)countDownTime;
- (BOOL)needHideWhenCountDownEnd;
- (BOOL)isCountDownEnd;
- (BOOL)isEqualString:(id)a0 stringB:(id)a1;
- (BOOL)isBusinessCustom;
- (id)backgroundColorDark;
- (void).cxx_destruct;
- (id)titleColor;
- (id)initWithType:(unsigned long long)a0;
- (id)statsType;
- (id)backgroundColor;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)sortIdentifier;

@end
