@class NSString;

@interface EntertainmentButtonSwitchConfigV2 : GPBMessage

@property (nonatomic) int switchSecond;
@property (nonatomic) BOOL hasSwitchSecond;
@property (nonatomic) int timeCountType;
@property (nonatomic) BOOL hasTimeCountType;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (copy, nonatomic) NSString *richText;
@property (nonatomic) BOOL hasRichText;
@property (nonatomic) BOOL needCountdownText;
@property (nonatomic) BOOL hasNeedCountdownText;
@property (nonatomic) int showEndAction;
@property (nonatomic) BOOL hasShowEndAction;

+ (id)descriptor;

@end
