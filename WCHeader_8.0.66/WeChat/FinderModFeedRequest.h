@class BaseRequest, NSString, FinderBaseRequest, NSMutableArray, FinderLocation;

@interface FinderModFeedRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *posterUsername;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSMutableArray *coverUrlWord;
@property (retain, nonatomic) NSString *fullCoverUrl;
@property (retain, nonatomic) NSMutableArray *shortTitle;
@property (retain, nonatomic) NSString *shareCoverUrl;
@property (retain, nonatomic) NSMutableArray *shareCoverUrlWord;
@property (nonatomic) unsigned int shareCoverShowStyle;
@property (nonatomic) unsigned int cardShowStyle;
@property (retain, nonatomic) FinderLocation *location;

+ (void)initialize;

@end
