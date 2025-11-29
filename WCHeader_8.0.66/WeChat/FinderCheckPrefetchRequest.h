@class FinderClientStatus, BaseRequest, NSData, FinderBaseRequest, NSMutableArray, FinderLiveReportBaseInfo;

@interface FinderCheckPrefetchRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSMutableArray *ids;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *readItems;
@property (retain, nonatomic) NSMutableArray *unreadItems;
@property (retain, nonatomic) NSData *lastCheckContext;
@property (retain, nonatomic) FinderLiveReportBaseInfo *liveReportBaseInfo;
@property (nonatomic) int checkType;
@property (retain, nonatomic) FinderClientStatus *status;

+ (void)initialize;

@end
