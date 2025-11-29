@class AWEIMMessageConversation, NSString, RxScheduler, NSArray, NSDictionary, NSMutableDictionary;
@protocol IESIMSearchEngineProtocol, IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMContactPickerSearchConParticipantProvider : IESIMContactPickerConParticipantProvider <IESIMContactPickerContentDataProvider>

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) unsigned long long filterOption;
@property (nonatomic) BOOL needHideMyself;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (retain, nonatomic) RxScheduler *asyncScheduler;
@property (copy) NSArray *participants;
@property (retain, nonatomic) id<IESIMSearchEngineProtocol> searchEngine;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) NSDictionary *allPeerInfo;
@property (retain, nonatomic) NSDictionary *roleMap;
@property (retain, nonatomic) NSMutableDictionary *waitUserInfo;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSectionBuilder:(id)a0;
- (id)getCellViewModels;
- (id)getSearchResultWithKeyword:(id)a0;
- (void)didLoadProvider:(id)a0 inComponent:(id)a1;
- (id)initWithConversationID:(id)a0 filterOption:(unsigned long long)a1;
- (void)p_setupSearchEngine;
- (void)__log:(id)a0;
- (id)__fetchData;
- (id)initWithConversationID:(id)a0 filterOption:(unsigned long long)a1 context:(id)a2;
- (id)p_updateData;
- (void)__injectSearchParams:(id)a0;
- (id)p_updateSigLabelWithString:(id)a0 format:(id)a1 imUser:(id)a2;
- (void)p_addHighlightToAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)__isAliasPinyinMatchKeyword:(id)a0 withUser:(id)a1;
- (BOOL)__isGroupAliasPinyinMatchKeyword:(id)a0 withUser:(id)a1;
- (BOOL)__isNicknamePinyinMatchKeyword:(id)a0 withUser:(id)a1;
- (BOOL)__isContactNamePinyinMatchKeyword:(id)a0 withUser:(id)a1;
- (BOOL)__isUserIDMatchKeyword:(id)a0 withUser:(id)a1;
- (id)p_fetchUsers:(id)a0;
- (id)fetchUserWithUsers:(id)a0;
- (void).cxx_destruct;

@end
