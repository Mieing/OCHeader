@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveSwitchConcertTicketReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) NSString *resourceId;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
