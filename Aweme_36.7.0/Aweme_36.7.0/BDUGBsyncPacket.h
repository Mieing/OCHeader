@class NSString, BDUGBsyncCursor, NSMutableDictionary, BDUGBsyncPayload;

@interface BDUGBsyncPacket : GPBMessage

@property (retain, nonatomic) BDUGBsyncCursor *cursor;
@property (nonatomic) BOOL hasCursor;
@property (retain, nonatomic) BDUGBsyncPayload *payload;
@property (nonatomic) BOOL hasPayload;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) long long expireTs;
@property (nonatomic) BOOL hasExpireTs;
@property (nonatomic) int ctrl;
@property (nonatomic) BOOL hasCtrl;
@property (copy, nonatomic) NSString *msgid;
@property (nonatomic) BOOL hasMsgid;
@property (copy, nonatomic) NSString *logid;
@property (nonatomic) BOOL hasLogid;
@property (nonatomic) long long ts;
@property (nonatomic) BOOL hasTs;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;

+ (id)descriptor;

- (id)cursor;
- (long long)ts;
- (id)extra;
- (id)payload;

@end
