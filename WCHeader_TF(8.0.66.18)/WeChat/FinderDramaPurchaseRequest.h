@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderDramaPurchaseRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *posterFinderUsername;
@property (nonatomic) unsigned long long dramaId;
@property (retain, nonatomic) NSString *sourceFeedId;
@property (nonatomic) unsigned int commentScene;

+ (void)initialize;

@end
