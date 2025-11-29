@class NSString, FinderEventBaseRequest;

@interface UpdateTorchCertRequest : WXPBGeneratedMessage

@property (retain, nonatomic) FinderEventBaseRequest *baseReq;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) BOOL isShowSportStep;
@property (nonatomic) BOOL isAccessLocation;

+ (void)initialize;

@end
