@class AWEIMMessageConversation, NSArray, NSString, NSDictionary, IESIMContactPickerContext, AWEIMGroupParticipantInactiveInfoResponse;
@protocol IESIMContactPickerContentDataProviderDelegate, IESIMContactPickerContentSectionBuilder, IESIMHttpTask;

@interface IESIMContactPickerConInactiveParticipantsDataProvider : IESIMContactPickerContactDataProvider <IESIMContactPickerContentDataProvider, IESIMContactDataProviderLoadMoreAble>

@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (retain, nonatomic) NSArray *loadedCellModels;
@property (weak, nonatomic) IESIMContactPickerContext *listContext;
@property (retain, nonatomic) AWEIMGroupParticipantInactiveInfoResponse *model;
@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) NSDictionary *allMemberInfo;
@property (nonatomic) unsigned long long filterOption;
@property (retain, nonatomic) id<IESIMHttpTask> task;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) NSDictionary *allPeerInfo;
@property (retain, nonatomic) NSArray *tagViewModelList;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasMore;

- (void)updateSectionBuilder:(id)a0;
- (id)getCellViewModels;
- (id)getSearchResultWithKeyword:(id)a0;
- (void)didLoadProvider:(id)a0 inComponent:(id)a1;
- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (id)initWitContext:(id)a0;
- (void)__addNewCellModels:(id)a0;
- (void)__getMoreRecentDataWithCompletion:(id /* block */)a0;
- (long long)__limitPerPage;
- (void)__fetchData:(long long)a0 scene:(long long)a1 cursor:(long long)a2 completion:(id /* block */)a3;
- (void)__setUpAllMemberData;
- (id)__shareModelWithInactiveModels:(id)a0;
- (id)initWitContext:(id)a0 filterOption:(unsigned long long)a1;
- (void).cxx_destruct;

@end
