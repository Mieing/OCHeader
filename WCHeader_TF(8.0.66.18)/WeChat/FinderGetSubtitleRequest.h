@class BaseRequest, NSData, FinderBaseRequest, NSMutableArray;

@interface FinderGetSubtitleRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long subtitleId;
@property (nonatomic) unsigned long long startTimestamp;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSMutableArray *languageReq;

+ (void)initialize;

@end
