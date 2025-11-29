@class NSData, NSString;

@interface BDUGSyncClientData : NSObject

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) double ts;
@property (copy, nonatomic) NSString *topicID;
@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSString *msgID;

- (id)initWithSynclog:(id)a0;
- (void).cxx_destruct;

@end
