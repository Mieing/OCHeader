@class NSString, NSArray, NSMutableArray;

@interface WCTimelineMissReadJumpBtnClickReportRecord : MMObject

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int jumpBtnId;
@property (nonatomic) unsigned long long missReadRecordId;
@property (nonatomic) long long isJumpToFirstMissReadRecord;
@property (nonatomic) unsigned int jumpSkipCount;
@property (retain, nonatomic) NSArray *missReadFeedIds;
@property (retain, nonatomic) NSMutableArray *exposureFeedIds;
@property (nonatomic) unsigned int jumpItemCreatTimeToNowInterval;

- (void).cxx_destruct;

@end
