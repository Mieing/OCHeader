@class NSMutableArray;

@interface TIMXPBNCheckMessagesPerUserResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *messagesArray;
@property (readonly, nonatomic) unsigned long long messagesArray_Count;

+ (id)descriptor;

@end
