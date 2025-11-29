@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderPoiBasicInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *poiId;
@property (nonatomic) unsigned int fromCommentScene;
@property (nonatomic) unsigned int prefetch;

+ (void)initialize;

@end
