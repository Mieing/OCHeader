@class NSMutableArray;

@interface TIMXPBNClearDeletedConversationRequestBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *conversationsArray;
@property (readonly, nonatomic) unsigned long long conversationsArray_Count;

+ (id)descriptor;

@end
