@class NSString, NSMutableArray;

@interface BDUGBsyncTopic : GPBMessage

@property (nonatomic) int flag;
@property (nonatomic) BOOL hasFlag;
@property (nonatomic) int bucket;
@property (nonatomic) BOOL hasBucket;
@property (nonatomic) int topicType;
@property (nonatomic) BOOL hasTopicType;
@property (nonatomic) long long syncId;
@property (nonatomic) BOOL hasSyncId;
@property (nonatomic) long long refCursor;
@property (nonatomic) BOOL hasRefCursor;
@property (nonatomic) long long newCursor;
@property (nonatomic) BOOL hasNewCursor;
@property (retain, nonatomic) NSMutableArray *packetsArray;
@property (readonly, nonatomic) unsigned long long packetsArray_Count;
@property (nonatomic) int topicStatus;
@property (nonatomic) BOOL hasTopicStatus;
@property (nonatomic) long long expireTime;
@property (nonatomic) BOOL hasExpireTime;
@property (copy, nonatomic) NSString *reqId;
@property (nonatomic) BOOL hasReqId;

+ (id)descriptor;

- (unsigned long long)packetsArray_Count;
- (long long)refCursor;
- (long long)newCursor;
- (int)topicStatus;
- (long long)syncId;
- (int)topicType;
- (int)bucket;
- (id)packetsArray;
- (int)flag;
- (void)setRefCursor:(long long)a0;
- (void)setSyncId:(long long)a0;
- (void)setTopicType:(int)a0;
- (void)setBucket:(int)a0;
- (void)setFlag:(int)a0;

@end
