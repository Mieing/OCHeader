@class FinderEventBaseRequest;

@interface JoinRunWithRequest : WXPBGeneratedMessage

@property (retain, nonatomic) FinderEventBaseRequest *baseReq;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;

+ (void)initialize;

@end
