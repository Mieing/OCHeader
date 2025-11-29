@class BaseRequest, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderGetPlayHistoryRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int needCount;
@property (retain, nonatomic) FinderClientStatus *status;
@property (nonatomic) unsigned int tabType;
@property (nonatomic) unsigned int needItemTypes;

+ (void)initialize;

@end
