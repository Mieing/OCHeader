@class NSString;

@interface TIMXOBroadCastOperationResponse : NSObject

@property (nonatomic) unsigned long long status;
@property (nonatomic) long long checkCode;
@property (copy, nonatomic) NSString *checkMessage;
@property (copy, nonatomic) NSString *extraInfo;

- (void).cxx_destruct;

@end
