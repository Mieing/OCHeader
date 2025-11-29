@class TIMXThreadSafeMutableDictionary, NSString;

@interface TIMXStrangerConversationsFetcherManager : NSObject <TIMXInstanceScopeSingleton>

@property (readonly, nonatomic) TIMXThreadSafeMutableDictionary *sharedMessagesInConversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
