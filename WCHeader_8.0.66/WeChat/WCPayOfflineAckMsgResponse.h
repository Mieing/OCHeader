@class NSString;

@interface WCPayOfflineAckMsgResponse : NSObject

@property (nonatomic) long long retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) long long pollTime;

- (void).cxx_destruct;

@end
