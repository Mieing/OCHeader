@class NSMutableArray;

@interface TIMXPBNThreadBubbleMessages : GPBMessage

@property (retain, nonatomic) NSMutableArray *bubbleMessagesArray;
@property (readonly, nonatomic) unsigned long long bubbleMessagesArray_Count;
@property (nonatomic) int messageDirection;
@property (nonatomic) BOOL hasMessageDirection;

+ (id)descriptor;

@end
