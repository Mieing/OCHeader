@class BaseRequest, NSString, FinderBaseRequest, NSMutableArray;

@interface FinderRefreshTipsRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *entryList;

+ (void)initialize;

@end
