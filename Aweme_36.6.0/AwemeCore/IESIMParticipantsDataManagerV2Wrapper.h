@class NSString, NSArray;
@protocol IESIMParticipantsDataManagerV2Protocol, IESIMParticipantsDataManagerDelegate;

@interface IESIMParticipantsDataManagerV2Wrapper : NSObject <IESIMParticipantsDataManagerObserver, IESIMParticipantsDataManagerProtocol>

@property (retain, nonatomic) id<IESIMParticipantsDataManagerV2Protocol> participantsDataManagerV2;
@property (copy, nonatomic) NSString *observerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *conversationId;
@property (readonly, copy, nonatomic) NSArray *participants;
@property (readonly, copy, nonatomic) NSArray *admins;
@property (weak, nonatomic) id<IESIMParticipantsDataManagerDelegate> delegate;

+ (void)asyncGetParticipantWithConversationId:(id)a0 userID:(id)a1 completion:(id /* block */)a2;

- (id)participantForUserId:(id)a0;
- (id)initWithConversationId:(id)a0;
- (void)participantsDataManager:(id)a0 didUpdateWithNewParticipants:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
