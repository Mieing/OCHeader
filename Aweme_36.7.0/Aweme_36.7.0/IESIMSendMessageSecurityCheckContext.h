@class NSString;

@interface IESIMSendMessageSecurityCheckContext : NSObject

@property (nonatomic) long long checkScene;
@property (copy, nonatomic) NSString *targetUid;
@property (copy, nonatomic) NSString *targetSessionId;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) BOOL hasSecurityCheck;

- (void).cxx_destruct;

@end
