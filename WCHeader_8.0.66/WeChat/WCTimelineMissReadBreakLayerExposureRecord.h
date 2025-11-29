@class NSString, NSMutableArray;

@interface WCTimelineMissReadBreakLayerExposureRecord : MMObject

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSMutableArray *newerFeedIds;
@property (retain, nonatomic) NSMutableArray *exposureFeedIds;
@property (nonatomic) unsigned long long missReadRecordCount;
@property (nonatomic) unsigned long long jumpableMissReadRecordCount;
@property (nonatomic) unsigned int exposureCount;
@property (nonatomic) unsigned int clickCount;
@property (nonatomic) unsigned long long jumpBtnRefItemID;
@property (nonatomic) unsigned long long jumpBtnId;
@property (nonatomic) unsigned int jumpBtnClickType;
@property (nonatomic) unsigned int missReadJumpBtnFirstExposureTime;
@property (nonatomic) unsigned long long jumpBreakLayerFeedCount;
@property (nonatomic) unsigned long long jumpBreakLayerWeishangFeedCount;
@property (retain, nonatomic) NSMutableArray *jumpBreakLayerFeedIds;
@property (nonatomic) unsigned long long jumpBreakLayerdId;
@property (nonatomic) BOOL isGenNewBreakLayer;
@property (nonatomic) unsigned long long newBreakLayerID;
@property (nonatomic) unsigned int preCreateBreakLayerFeedCnt;
@property (nonatomic) unsigned int preCreateBreakLayerWsFeedCnt;

- (void).cxx_destruct;

@end
