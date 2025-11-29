@class IESIMSendMessageResponse;

@interface AWEIMShareSendMessageResultMessageModel : NSObject

@property (nonatomic) BOOL success;
@property (retain, nonatomic) IESIMSendMessageResponse *response;

- (void).cxx_destruct;

@end
