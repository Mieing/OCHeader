@class FinderBaseRequest, FinderClientStatus;

@interface LVCgiContext : WXPBGeneratedMessage

@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) FinderClientStatus *status;

+ (void)initialize;

@end
