@class AWEIMMessageConversation, NSString, NSArray, RxScheduler, NSDictionary;
@protocol IESIMContactPickerContentDataProviderDelegate;

@interface IESIMContactPickerNetWorkConParticipantProvider : IESIMContactPickerConParticipantProvider <IESIMContactPickerContentDataProvider>

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) unsigned long long filterOption;
@property (nonatomic) BOOL needHideMyself;
@property (copy, nonatomic) NSArray *participants;
@property (retain, nonatomic) RxScheduler *asyncScheduler;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) NSDictionary *allPeerInfo;
@property (retain, nonatomic) NSDictionary *roleMap;
@property (retain, nonatomic) NSArray *tagViewModelList;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didLoadProvider:(id)a0 inComponent:(id)a1;
- (void)__log:(id)a0;
- (id)__fetchData;
- (id)p_fetchUsers:(id)a0;
- (id)fetchUserWithUsers:(id)a0;
- (void).cxx_destruct;

@end
