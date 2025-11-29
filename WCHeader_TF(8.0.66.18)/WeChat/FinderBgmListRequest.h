@class BaseRequest, NSString, NSData, NSMutableArray;

@interface FinderBgmListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int type;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) float latitude;
@property (nonatomic) float longitude;
@property (nonatomic) unsigned long long videoDuration;
@property (retain, nonatomic) NSData *classifyResultData;
@property (retain, nonatomic) NSMutableArray *miaojianMusicIdList;
@property (retain, nonatomic) NSString *forRecommendExtraInfo;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSMutableArray *assetItems;

+ (void)initialize;

@end
