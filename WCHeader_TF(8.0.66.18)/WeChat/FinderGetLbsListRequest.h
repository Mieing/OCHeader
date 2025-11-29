@class BaseRequest, FinderLbsLocation, NSData, FinderBaseRequest, NSString;

@interface FinderGetLbsListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int requestScene;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderLbsLocation *lbsLocation;
@property (retain, nonatomic) NSString *keyword;
@property (nonatomic) unsigned int entryTime;
@property (nonatomic) unsigned int isAutoQuery;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderLbsLocation *materialLbsLocation;

+ (void)initialize;

@end
