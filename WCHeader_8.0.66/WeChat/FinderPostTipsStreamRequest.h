@class BaseRequest, FinderBaseRequest, NSData;

@interface FinderPostTipsStreamRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *byPass;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
