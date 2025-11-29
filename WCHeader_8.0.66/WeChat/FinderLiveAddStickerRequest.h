@class BaseRequest, NSString, FinderBaseRequest, NSMutableArray;

@interface FinderLiveAddStickerRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSMutableArray *stickers;

+ (void)initialize;

@end
