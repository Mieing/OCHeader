@class NSString, NSDictionary, NSDate;

@interface TIMXOConversationSortOrderCalculateContext : NSObject

@property (copy, nonatomic) NSString *conversationIdentifier;
@property (copy, nonatomic) NSDictionary *localExt;
@property (copy, nonatomic) NSDictionary *syncedExt;
@property (retain, nonatomic) NSDate *updatedAt;
@property (nonatomic) BOOL stickOnTop;
@property (nonatomic) BOOL bottomConversation;

+ (id)sortableConversationWithRootObject:(id)a0 model:(id)a1;

- (void).cxx_destruct;

@end
