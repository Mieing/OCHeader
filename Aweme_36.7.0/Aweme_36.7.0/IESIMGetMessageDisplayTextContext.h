@class NSString, AWEIMMessage;

@interface IESIMGetMessageDisplayTextContext : NSObject

@property (nonatomic) long long displayType;
@property (copy, nonatomic) NSString *peerUserName;
@property (retain, nonatomic) AWEIMMessage *message;
@property (nonatomic) long long displayStyle;

- (void).cxx_destruct;

@end
