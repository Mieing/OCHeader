@class NSString, NSArray;
@protocol IESIMSDKParticipantsInConversationDataSource, IESIMParticipantsDataManagerDelegate;

@interface IESIMParticipantsDataManager : NSObject <TIMXOParticipantsInConversationDataSourceDelegate, IESIMTIMXLifeMessage, IESIMParticipantsDataManagerProtocol>

@property (retain) id<IESIMSDKParticipantsInConversationDataSource> dataSource;
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
- (void)iesim_timxInstanceMounted:(id)a0;
- (void)iesim_timxInstanceUnmounted:(id)a0;
- (void)reloadParticipant;
- (void)participantsDataSourceDidUpdate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
