@class NSString, UrlStructV2;

@interface HotListStructV2 : GPBMessage

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) BOOL hasImageURL;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *i18NTitle;
@property (nonatomic) BOOL hasI18NTitle;
@property (copy, nonatomic) NSString *header;
@property (nonatomic) BOOL hasHeader;
@property (copy, nonatomic) NSString *footer;
@property (nonatomic) BOOL hasFooter;
@property (nonatomic) int patternType;
@property (nonatomic) BOOL hasPatternType;
@property (nonatomic) int rank;
@property (nonatomic) BOOL hasRank;
@property (nonatomic) int hotScore;
@property (nonatomic) BOOL hasHotScore;
@property (nonatomic) int viewCount;
@property (nonatomic) BOOL hasViewCount;
@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) BOOL hasGroupId;
@property (copy, nonatomic) NSString *sentence;
@property (nonatomic) BOOL hasSentence;
@property (nonatomic) long long sentenceId;
@property (nonatomic) BOOL hasSentenceId;
@property (nonatomic) int label;
@property (nonatomic) BOOL hasLabel;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (retain, nonatomic) UrlStructV2 *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) int disableDisplay;
@property (nonatomic) BOOL hasDisableDisplay;
@property (nonatomic) int disableDisplayInner;
@property (nonatomic) BOOL hasDisableDisplayInner;

+ (id)descriptor;

@end
