@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderLongVideoUserPageReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baserequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *bizUsername;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderClientStatus *status;

+ (void)initialize;

@end
