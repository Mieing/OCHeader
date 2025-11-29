@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderNotifyGetMoreLiveRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *funcMsgReportExtInfo;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderClientStatus *status;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) unsigned int noticeType;

+ (void)initialize;

@end
