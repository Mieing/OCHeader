@class NSString, NSData;

@interface BDUGSyncReportLog : NSObject

@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) int bucket;
@property (nonatomic) long long syncCursor;
@property (nonatomic) int business;
@property (copy, nonatomic) NSString *msgID;
@property (nonatomic) char consumeType;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *md5;

- (void).cxx_destruct;

@end
