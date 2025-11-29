@class UIColor, NSArray, HTSLiveUser, IESLiveTemplateEngineLogNode, NSDictionary, NSAttributedString;

@interface HTSLiveTemplateEngineConfiguration : NSObject

@property (nonatomic) BOOL checkSensitiveNickName;
@property (nonatomic) BOOL shouldFilterIcon;
@property (nonatomic) long long nickNameCutLength;
@property (nonatomic) BOOL allowAnimatedImage;
@property (nonatomic) BOOL forceUseLocalColor;
@property (retain, nonatomic) UIColor *localContentColor;
@property (retain, nonatomic) UIColor *localUserTextColor;
@property (retain, nonatomic) UIColor *localGiftTextColor;
@property (retain, nonatomic) UIColor *localPatternTextColor;
@property (nonatomic) double localPatternFontSize;
@property (nonatomic) double imageMaxHeight;
@property (copy, nonatomic) NSAttributedString *imagePlaceHolderContent;
@property (nonatomic) double imageScalingRateWithFont;
@property (nonatomic) double checkImageScaleFromURI;
@property (nonatomic) double overlapSpace;
@property (nonatomic) BOOL makeEmojiSizeEqualToWordFontSize;
@property (copy, nonatomic) NSArray *filterBadgeUserIDs;
@property (retain, nonatomic) HTSLiveUser *userModel;
@property (nonatomic) BOOL enableLogNode;
@property (retain, nonatomic) IESLiveTemplateEngineLogNode *logNode;
@property (retain, nonatomic) NSDictionary *pieceValues;
@property (nonatomic) BOOL enableAllImageCache;
@property (nonatomic) BOOL enableCenterImageAlignment;
@property (nonatomic) double badgeScale;
@property (nonatomic) BOOL showNewVipBadge;

+ (id)defaultConfiguration;

- (void).cxx_destruct;

@end
