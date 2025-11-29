@class BaseRequest, NSString, GetWxaUsageRecordRequest_LocationInfo, GetWxaUsageRecordRequest_NetworkInfo;

@interface GetWxaUsageRecordRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int reason;
@property (nonatomic) unsigned int condition;
@property (nonatomic) unsigned int maxUpdatetime;
@property (nonatomic) unsigned int historyCount;
@property (retain, nonatomic) NSString *commuseAppExtraData;
@property (retain, nonatomic) GetWxaUsageRecordRequest_LocationInfo *locationInfo;
@property (retain, nonatomic) GetWxaUsageRecordRequest_NetworkInfo *networkInfo;
@property (retain, nonatomic) NSString *sessionId;

+ (void)initialize;

@end
