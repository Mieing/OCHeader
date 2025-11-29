@class NSString, TIMXSDKInstance, TIMXPBNParticipantsPage;

@interface TIMXECOMFetchAllParticipantsHandler : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) TIMXPBNParticipantsPage *firstPageParticipants;
@property (nonatomic) long long shortID;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) int conversationType;
@property (nonatomic) int inbox;
@property (nonatomic) BOOL isRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)insertParticipantsPages:(id)a0 forConversation:(id)a1;
- (void)fetchAllParticipantsFromServerPage:(id)a0 resultArray:(id)a1;
- (void)fetchWithFirstPageParticipants:(id)a0 convId:(id)a1 shortID:(long long)a2 type:(int)a3 inbox:(int)a4;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
