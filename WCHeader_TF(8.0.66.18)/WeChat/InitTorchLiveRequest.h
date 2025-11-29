@class FinderEventBaseRequest;

@interface InitTorchLiveRequest : WXPBGeneratedMessage

@property (retain, nonatomic) FinderEventBaseRequest *baseReq;
@property (nonatomic) unsigned int source;

+ (void)initialize;

@end
