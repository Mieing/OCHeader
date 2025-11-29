@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderColumnFlowReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) unsigned int pullType;
@property (nonatomic) unsigned int displayTabType;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) NSData *rootLastBuffer;
@property (nonatomic) unsigned int columnId;
@property (retain, nonatomic) NSString *columnBuffer;

+ (void)initialize;

@end
