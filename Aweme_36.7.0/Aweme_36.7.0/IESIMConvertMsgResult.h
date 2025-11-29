@class AWEIMMessage;

@interface IESIMConvertMsgResult : NSObject

@property (retain, nonatomic) AWEIMMessage *convertedMsg;
@property (nonatomic) long long convertedMsgType;
@property (nonatomic) BOOL notDisplay;

- (void).cxx_destruct;

@end
