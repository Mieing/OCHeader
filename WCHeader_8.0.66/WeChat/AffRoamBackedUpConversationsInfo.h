@class NSMutableArray;

@interface AffRoamBackedUpConversationsInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *conversationId;
@property (retain, nonatomic) NSMutableArray *size;
@property (nonatomic) BOOL isComplete;
@property (nonatomic) unsigned int version;

+ (void)initialize;

@end
