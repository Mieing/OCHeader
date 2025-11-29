@class BaseRequest, NSData, FinderBaseRequest, FinderClientStatus, NSMutableArray;

@interface FinderStreamRerankReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) NSMutableArray *feedList;

+ (void)initialize;

@end
