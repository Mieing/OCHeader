@class NSString, NSMutableArray, BaseResponse;

@interface GetOnlineInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int onlineCount;
@property (retain, nonatomic) NSMutableArray *onlineList;
@property (retain, nonatomic) NSString *summaryXml;
@property (nonatomic) unsigned int flag;
@property (nonatomic) unsigned int iconType;

+ (void)initialize;

@end
