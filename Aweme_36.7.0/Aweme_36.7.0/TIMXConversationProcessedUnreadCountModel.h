@class NSString;

@interface TIMXConversationProcessedUnreadCountModel : NSObject <TIMXConversationProcessedUnreadCountModelProtocol>

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long processedUnreadCount;
@property (nonatomic) BOOL unreadMentioned;
@property (nonatomic) long long boxTypeMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
