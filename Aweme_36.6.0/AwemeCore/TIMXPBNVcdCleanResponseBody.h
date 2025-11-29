@class NSMutableArray;

@interface TIMXPBNVcdCleanResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *serverConversationsArray;
@property (readonly, nonatomic) unsigned long long serverConversationsArray_Count;

+ (id)descriptor;

@end
