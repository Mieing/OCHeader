@class BaseRequest, FinderBaseRequest, NSData;

@interface FinderSearchGetHotWordListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *hotwordLastBuff;
@property (retain, nonatomic) NSData *hotwordSessionBuffer;
@property (retain, nonatomic) NSData *objHotwordInfoBuff;

+ (void)initialize;

@end
