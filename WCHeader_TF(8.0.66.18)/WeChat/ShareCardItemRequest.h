@class ShareTag, BaseRequest, NSString, NSMutableArray, StatisticInfo;

@interface ShareCardItemRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int isShareOwncard;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSString *appUserName;
@property (retain, nonatomic) NSString *consumedboxCardId;
@property (retain, nonatomic) ShareTag *shareTag;
@property (nonatomic) unsigned int fromScene;
@property (retain, nonatomic) StatisticInfo *statisticInfo;

+ (void)initialize;

@end
