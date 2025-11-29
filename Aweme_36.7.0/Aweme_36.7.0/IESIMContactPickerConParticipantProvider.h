@class AWEIMMessageConversation, NSString, NSArray, RxScheduler, NSDictionary;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMContactPickerConParticipantProvider : NSObject <IESIMContactPickerContentDataProvider>

@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) unsigned long long filterOption;
@property (nonatomic) BOOL needHideMyself;
@property (copy, nonatomic) NSArray *participants;
@property (copy, nonatomic) NSArray *cellModels;
@property (retain, nonatomic) RxScheduler *asyncScheduler;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) NSDictionary *allPeerInfo;
@property (retain, nonatomic) NSDictionary *roleMap;
@property (retain, nonatomic) NSArray *tagViewModelList;
@property (nonatomic) long long participantDataType;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSectionBuilder:(id)a0;
- (id)getCellViewModels;
- (id)initWithConversationID:(id)a0 filterOption:(unsigned long long)a1;
- (void)__log:(id)a0;
- (id)__fetchData;
- (id)initWithConversationID:(id)a0 filterOption:(unsigned long long)a1 context:(id)a2;
- (void).cxx_destruct;

@end
