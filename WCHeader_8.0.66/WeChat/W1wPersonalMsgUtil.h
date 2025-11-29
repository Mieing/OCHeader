@class NSString;

@interface W1wPersonalMsgUtil : NSObject

@property (class, copy, nonatomic) NSString *senderUsername;

+ (id)getSenderUsername;
+ (id)getMsgUsername:(id)a0;
+ (id)getMsgToUsername:(id)a0;

@end
