@class NSString, NSArray, TIMXSDKInstance;
@protocol TIMXOBotsInConversationDataSourceDelegate;

@interface TIMXOBotsInConversationDataSource : NSObject <TIMXMessageStoreChangesObserver> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSArray *bots;
@property (weak, nonatomic) id<TIMXOBotsInConversationDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootObject:(id)a0 conversationID:(id)a1;
- (void)onBotsInConversationChanged:(id)a0;
- (void).cxx_destruct;

@end
