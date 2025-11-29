@class NSString, NSArray, NSMutableSet, NSMutableDictionary, NSMutableArray, IESIMSelectJoinGroupPanelOpenCapabilityModel;
@protocol IESIMContactPickerContentDataProviderDelegate, IESIMContactPickerContentSectionBuilder, IESIMContactPickerVideoDispatchGroupDataProviderDelegate;

@interface IESIMContactPickerVideoDispatchGroupDataProvider : NSObject <IESIMContactPickerContentDataProvider, IESIMContactDataProviderLoadMoreAble>

@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) NSMutableSet *cidSet;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (retain, nonatomic) NSArray *itemViewModels;
@property (nonatomic) long long nextCursor;
@property (copy, nonatomic) id /* block */ enterGroupBlock;
@property (retain, nonatomic) NSMutableArray *groupArray;
@property (retain, nonatomic) NSMutableSet *reportedGroupIDSet;
@property (nonatomic) BOOL halfScreenScrollToTop;
@property (nonatomic) long long countForFoldScreen;
@property (nonatomic) long long countForExpendScreen;
@property (nonatomic) long long source;
@property (retain, nonatomic) IESIMSelectJoinGroupPanelOpenCapabilityModel *selectJoinGroupModel;
@property (retain, nonatomic) NSMutableDictionary *operationResult;
@property (nonatomic) long long bizLine;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSString *bizScene;
@property (nonatomic) long long secretType;
@property (retain, nonatomic) NSString *sourceType;
@property (retain, nonatomic) NSString *itemID;
@property (weak, nonatomic) id<IESIMContactPickerVideoDispatchGroupDataProviderDelegate> delegate;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasMore;

- (void)updateSectionBuilder:(id)a0;
- (id)getCellViewModels;
- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (id)getRequestParams;
- (void)handleApplyJoinStatusNotification:(id)a0;
- (void)setupEnterGroupBlock;
- (void)halfScreenContainerScrollToTop;
- (void)handleLeaveGroupNotification:(id)a0;
- (id)groupListURL;
- (id)generateCellModelWithGroupModel:(id)a0;
- (long long)cellCountForFoldScreen;
- (long long)cellCountForExpendScreen;
- (id)openCapabilityModelForGroupModel:(id)a0;
- (BOOL)canUpdateButtonConfigWithStatusCode:(long long)a0;
- (void)updateButtonConfig:(id)a0 andJoinStatus:(long long)a1;
- (id)joinGroupTrackParamsWithGroup:(id)a0;
- (BOOL)canOpenGroupDirectlyWithStatusCode:(long long)a0;
- (id)enterpriseTrackParamsWithGroup:(id)a0;
- (id)buttonConfigWithGroupModel:(id)a0;
- (id)openCapabilityModelForGroupModel:(id)a0 WithCellModel:(id)a1;
- (id)buttonContextWithJoinStatus:(long long)a0;
- (id)statusCodeMapSettings;
- (id)buttonContextWithButtonName:(id)a0 buttonEnable:(BOOL)a1;
- (void)trackUnknownGroupCodeWithGroup:(id)a0 statusCode:(long long)a1;
- (void)trackIMGroupApplyEntranceShowWithGroup:(id)a0;
- (id)initWithOpenCapabilityModel:(id)a0;
- (void)groudCellWillShowAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithItemID:(id)a0;
- (void)addObservers;

@end
