@class NSString;

@interface BDUGSyncCursor : NSObject

@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long syncID;
@property (nonatomic) char topicType;
@property (nonatomic) char bucket;
@property (nonatomic) long long recvCursor;
@property (nonatomic) long long deliverCursor;
@property (nonatomic) long long reportCursor;

- (void).cxx_destruct;

@end
