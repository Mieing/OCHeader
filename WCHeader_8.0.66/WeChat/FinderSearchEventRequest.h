@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderSearchEventRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuff;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *finderNickname;
@property (retain, nonatomic) NSString *eventName;
@property (nonatomic) unsigned long long topicId;

+ (void)initialize;

@end
