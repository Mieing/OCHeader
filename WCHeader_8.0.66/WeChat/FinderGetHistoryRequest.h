@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderGetHistoryRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int displayTabType;
@property (retain, nonatomic) FinderClientStatus *status;

+ (void)initialize;

@end
