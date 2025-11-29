@class NSString, HTSLiveChatOptionPanelStatus;

@interface ChatOptionResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long msgId;
@property (nonatomic) int optionSuccess;
@property (retain, nonatomic) HTSLiveChatOptionPanelStatus *status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *toast;

+ (id)descriptor;

@end
