@class BaseRequest, NSString, NSData, NSMutableArray;

@interface MMListenVideoBgmListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int type;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) float latitude;
@property (nonatomic) float longitude;
@property (retain, nonatomic) NSMutableArray *imageData;
@property (nonatomic) unsigned long long bussId;
@property (nonatomic) unsigned long long videoDuration;
@property (retain, nonatomic) NSData *classifyResultData;
@property (retain, nonatomic) NSMutableArray *miaojianMusicIds;
@property (retain, nonatomic) NSString *forRecommendExtraInfo;

+ (void)initialize;

@end
