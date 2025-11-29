@class AWEIMMessage;

@interface AWEIMServerInsertNoticeMessageModel : NSObject

@property (retain, nonatomic) AWEIMMessage *message;
@property (nonatomic) long long preCheckMessageCount;

- (void).cxx_destruct;

@end
