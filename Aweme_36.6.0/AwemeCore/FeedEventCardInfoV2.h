@class NSString, FeedCardTemplateInfo;

@interface FeedEventCardInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *settingKey;
@property (nonatomic) BOOL hasSettingKey;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (copy, nonatomic) NSString *feData;
@property (nonatomic) BOOL hasFeData;
@property (copy, nonatomic) NSString *clientData;
@property (nonatomic) BOOL hasClientData;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (retain, nonatomic) FeedCardTemplateInfo *feedCardTemplate;
@property (nonatomic) BOOL hasFeedCardTemplate;
@property (nonatomic) BOOL isFeedCardTemplate;
@property (nonatomic) BOOL hasIsFeedCardTemplate;
@property (copy, nonatomic) NSString *businessId;
@property (nonatomic) BOOL hasBusinessId;
@property (nonatomic) BOOL isVideoPlayable;
@property (nonatomic) BOOL hasIsVideoPlayable;
@property (copy, nonatomic) NSString *mainFallFeedCardScene;
@property (nonatomic) BOOL hasMainFallFeedCardScene;

+ (id)descriptor;

@end
