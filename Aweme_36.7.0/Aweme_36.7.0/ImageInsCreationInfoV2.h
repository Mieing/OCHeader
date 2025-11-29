@class NSString, UrlStructV2;

@interface ImageInsCreationInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL hasSubTitle;
@property (copy, nonatomic) NSString *button;
@property (nonatomic) BOOL hasButton;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) UrlStructV2 *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *logInfo;
@property (nonatomic) BOOL hasLogInfo;
@property (retain, nonatomic) UrlStructV2 *darkIcon;
@property (nonatomic) BOOL hasDarkIcon;
@property (copy, nonatomic) NSString *bannerType;
@property (nonatomic) BOOL hasBannerType;

+ (id)descriptor;

- (id)darkIcon;
- (id)logInfo;
- (id)icon;
- (int)type;
- (id)schema;
- (id)button;
- (id)title;

@end
