@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderMixSearchRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSData *lastBuff;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) unsigned int tabType;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderClientStatus *status;
@property (nonatomic) unsigned int selectTabType;
@property (nonatomic) unsigned int subTabType;

+ (void)initialize;

@end
