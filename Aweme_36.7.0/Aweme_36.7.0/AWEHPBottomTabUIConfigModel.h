@class NSNumber, NSString;

@interface AWEHPBottomTabUIConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double fontSize;
@property (retain, nonatomic) NSNumber *pureTextFontWeightNumber;
@property (nonatomic) double badgeSize;
@property (nonatomic) double countBadgeSize;
@property (nonatomic) double countBadgeFontSize;
@property (nonatomic) double countBadgeMargin;
@property (nonatomic) double textBadgeSize;
@property (nonatomic) double textBadgeFontSize;
@property (nonatomic) double textBadgeMargin;
@property (nonatomic) double textBadgeRightAdjustWidth;
@property (nonatomic) double textBadgeMaxWidth;
@property (nonatomic) double badgeOffsetY;
@property (nonatomic) double badgeOffsetX;
@property (nonatomic) double bigBadgeOffsetY;
@property (nonatomic) double bigBadgeOffsetX;
@property (nonatomic) double badgeBaseline;
@property (nonatomic) double avatarSize;
@property (nonatomic) double avatarBadgeOffsetY;
@property (nonatomic) double avatarBadgeOffsetX;
@property (nonatomic) BOOL avatarBadgeHollowDisplay;
@property (nonatomic) double avatarBadgeHollowSize;
@property (readonly, nonatomic) double bigImageWidth;
@property (readonly, nonatomic) double bigImageHeight;
@property (retain, nonatomic) NSNumber *ratio;
@property (retain, nonatomic) NSNumber *bigLottieRatio;
@property (retain, nonatomic) NSNumber *bubbleRatio;
@property (readonly, nonatomic) double verticalStyleFontSize;
@property (readonly, nonatomic) double verticalStyleIconHeight;
@property (readonly, nonatomic) long long verticalStyleFontWeight;
@property (readonly, nonatomic) double verticalStyleTopMargin;
@property (readonly, nonatomic) double verticalStyleInnerGapY;
@property (readonly, nonatomic) double pureIconStyleIconHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
