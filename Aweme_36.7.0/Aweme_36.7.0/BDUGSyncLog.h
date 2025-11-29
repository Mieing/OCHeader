@class NSString, NSData, NSDictionary;

@interface BDUGSyncLog : NSObject

@property (nonatomic) long long syncID;
@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long syncCursor;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) int businessID;
@property (nonatomic) char consumeType;
@property (nonatomic) char status;
@property (nonatomic) long long ts;
@property (nonatomic) long long publish_ts;
@property (nonatomic) long long receive_ts;
@property (nonatomic) BOOL isFileStore;
@property (nonatomic) char topicType;
@property (nonatomic) char bucket;
@property (copy, nonatomic) NSString *reqID;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) char packetStatus;
@property (nonatomic) char ctrl;

- (void).cxx_destruct;

@end
