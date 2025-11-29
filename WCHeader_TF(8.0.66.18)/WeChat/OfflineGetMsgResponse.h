@class NSString;

@interface OfflineGetMsgResponse : NSObject

@property (copy, nonatomic) NSString *ackKey;
@property (copy, nonatomic) NSString *appMsg;
@property (nonatomic) int pollTime;

- (void).cxx_destruct;

@end
