@class NSString, UrlStructV2;

@interface HotspotAnchorStructV2 : GPBMessage

@property (nonatomic) long long sentenceId;
@property (nonatomic) BOOL hasSentenceId;
@property (copy, nonatomic) NSString *sentence;
@property (nonatomic) BOOL hasSentence;
@property (retain, nonatomic) UrlStructV2 *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *hint;
@property (nonatomic) BOOL hasHint;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (copy, nonatomic) NSString *logExtra;
@property (nonatomic) BOOL hasLogExtra;
@property (copy, nonatomic) NSString *dataSource;
@property (nonatomic) BOOL hasDataSource;

+ (id)descriptor;

@end
