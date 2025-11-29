@class NSString, NSMutableArray;

@interface Broadcast : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *messageList;
@property (retain, nonatomic) NSString *version;

+ (void)initialize;

@end
