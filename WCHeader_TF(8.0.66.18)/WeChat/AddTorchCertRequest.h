@class NSString, FinderEventBaseRequest;

@interface AddTorchCertRequest : WXPBGeneratedMessage

@property (retain, nonatomic) FinderEventBaseRequest *baseReq;
@property (retain, nonatomic) NSString *fromWxUsername;
@property (retain, nonatomic) NSString *fromFinderUsername;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) BOOL isLightTorch;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL isAutoAdd;

+ (void)initialize;

@end
