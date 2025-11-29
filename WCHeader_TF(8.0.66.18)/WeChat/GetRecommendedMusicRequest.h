@class BaseRequest, NSMutableArray, NSData;

@interface GetRecommendedMusicRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int musicNum;
@property (nonatomic) float latitude;
@property (nonatomic) float longitude;
@property (retain, nonatomic) NSMutableArray *imageData;
@property (nonatomic) unsigned long long requestId;
@property (nonatomic) int bussId;
@property (nonatomic) unsigned long long videoDuration;
@property (retain, nonatomic) NSData *classifyResultData;

+ (void)initialize;

@end
