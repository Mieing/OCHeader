@class NSArray, NSString, NSMutableSet, IESIMContactPickerContext, NSMutableArray;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMContactPickerGroupIncentiveDataProvider : NSObject <IESIMContactPickerContentDataProvider>

@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (retain, nonatomic) NSArray *loadedCellModels;
@property (weak, nonatomic) IESIMContactPickerContext *listContext;
@property (nonatomic) long long beforeSortOrder;
@property (retain, nonatomic) NSMutableArray *afterFilterConversations;
@property (nonatomic) long long queryCount;
@property (nonatomic) double scanBeginTime;
@property (retain, nonatomic) NSMutableSet *filterRepeatConvParticipantSet;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSectionBuilder:(id)a0;
- (void)updateComponentContext:(id)a0;
- (id)getCellViewModels;
- (id)getSearchResultWithKeyword:(id)a0;
- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (void)__addNewCellModels:(id)a0;
- (void)__getMoreIncentiveChatDataWithCompletion:(id /* block */)a0;
- (void)loadConvDataToMemoryWithConvIDList:(id)a0 andLoadEnoughCompletion:(id /* block */)a1;
- (void)p_loadCurrentHasIncentiveRelationConvIntoFilterRepeatConvParticipantSetWithCompltion:(id /* block */)a0;
- (long long)p_scanDBPageCount;
- (void)filterAndAddConvToCurrentListWithConvIDList:(id)a0;
- (void)sortGroupChatWithCompletion:(id /* block */)a0;
- (long long)groupInvitePanelNeedConvCount;
- (BOOL)p_isAvailableGroupChatForInvitePanelWithCon:(id)a0;
- (BOOL)p_isRepeatParticipantWithCon:(id)a0;
- (id)p_getConvParticipantsMd5ResultWithCid:(id)a0 con:(id)a1;
- (void)p_loadCurrentHasIncentiveRelationConvWithConvArray:(id)a0 lastOrder:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
