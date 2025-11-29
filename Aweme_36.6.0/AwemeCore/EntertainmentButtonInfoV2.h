@class EntGoldCoinAnimationConfigV2, NSString, EntButtonHighlightConfigV2, EntertainmentButtonSwitchConfigV2;

@interface EntertainmentButtonInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (copy, nonatomic) NSString *richText;
@property (nonatomic) BOOL hasRichText;
@property (nonatomic) int combineType;
@property (nonatomic) BOOL hasCombineType;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) BOOL hasTextColor;
@property (retain, nonatomic) EntertainmentButtonSwitchConfigV2 *guideWatchAllSwitchConfig;
@property (nonatomic) BOOL hasGuideWatchAllSwitchConfig;
@property (retain, nonatomic) EntGoldCoinAnimationConfigV2 *goldCoinAnimationConfig;
@property (nonatomic) BOOL hasGoldCoinAnimationConfig;
@property (retain, nonatomic) EntButtonHighlightConfigV2 *highlightConfig;
@property (nonatomic) BOOL hasHighlightConfig;

+ (id)descriptor;

@end
