@class BaseRequest, NSString, FinderBaseRequest, NSMutableArray;

@interface FinderPersonalMsgReadReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baserequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) unsigned int reportScene;

+ (void)initialize;

@end
