@class NSArray, NSString, TIMXSDKInstance;
@protocol TIMXOParticipantsInConversationDataSourceDelegate;

@interface TIMXOParticipantsInConversationDataSource : NSObject <IESIMSDKParticipantsInConversationDataSource, TIMXMessageStoreChangesObserver> {
    TIMXSDKInstance *_r;
}

@property (readonly, nonatomic) NSArray *participants;
@property (readonly, nonatomic) NSArray *admParticipants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *conversationID;
@property (nonatomic) long long config;
@property (retain, nonatomic) NSArray *participants;
@property (retain, nonatomic) NSArray *admParticipants;
@property (weak, nonatomic) id<TIMXOParticipantsInConversationDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootObject:(id)a0 conversationID:(id)a1;
- (void)onParticipantsInConversationChanged:(id)a0;
- (id)initWithRootObject:(id)a0 conversationID:(id)a1 config:(long long)a2;
- (void)fetchParticipantsAlias:(id)a0 secParticipants:(id)a1 completion:(id /* block */)a2;
- (void)p_trackLoadParticipantTimeWithConversationID:(id)a0 block:(id /* block */)a1;
- (void)fetchAllAdministrator;
- (void).cxx_destruct;

@end
