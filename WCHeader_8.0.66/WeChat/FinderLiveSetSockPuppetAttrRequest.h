@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderLiveSetSockPuppetAttrRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *headImgUrl;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long showTs;

+ (void)initialize;

@end
