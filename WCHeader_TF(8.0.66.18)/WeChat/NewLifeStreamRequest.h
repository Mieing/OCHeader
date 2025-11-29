@class NSData, NSString, FinderBaseRequest, NewLifeTabItem, BaseRequest, MarkReadStat, NewLifeConnectTagStream, NSMutableArray, FinderClientStatus, NewLifeTabTipsInfo;

@interface NewLifeStreamRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (nonatomic) unsigned int pullType;
@property (retain, nonatomic) NSMutableArray *readStats;
@property (retain, nonatomic) NewLifeTabItem *newlifeTab;
@property (retain, nonatomic) NewLifeTabTipsInfo *newlifeTabTipsInfo;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) NSMutableArray *unreadObjects;
@property (retain, nonatomic) NSString *newlifeSearchByPassInfo;
@property (retain, nonatomic) NSMutableArray *hobbyInfo;
@property (retain, nonatomic) NSMutableArray *existedCacheObjects;
@property (retain, nonatomic) NSMutableArray *existedFinderObjects;
@property (retain, nonatomic) NSMutableArray *otherTabLastBuffer;
@property (retain, nonatomic) NSMutableArray *existedTabList;
@property (retain, nonatomic) NSMutableArray *historyQueryList;
@property (retain, nonatomic) MarkReadStat *lastReadStat;
@property (retain, nonatomic) NSMutableArray *postTagList;
@property (nonatomic) unsigned int tagStreamState;
@property (retain, nonatomic) NewLifeConnectTagStream *tagStreamInfo;

+ (void)initialize;

@end
