@class BaseRequest, FinderBaseRequest, NSData;

@interface FinderHotWordStreamReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *bypassInfo;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
