@class NSSet;

@interface AWEIMStickOnTopMessagesFTCManager : NSObject

@property (retain) NSSet *hasFetchedConversationsSet;

+ (id)sharedInstance;

- (void)checkConversationHasFetchedStickOnTopMessagesInThisLife:(id)a0 completion:(id /* block */)a1;
- (void)setConversationHasFetchedInThisLife:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
