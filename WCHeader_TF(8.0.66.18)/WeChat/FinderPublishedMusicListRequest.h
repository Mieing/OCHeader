@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderPublishedMusicListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
