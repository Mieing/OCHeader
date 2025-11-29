@class AWEPostPageElementCenter, NSString, AWENewPublishTableCell, AWEPostPageAnchorViewModel, NSDictionary;

@interface AWEPostPageStarAtlasElement : AWEPostPageCellElement <AWECommerceAnchorMessageProtocol, AWEPostPageAnchorProtocol>

@property (retain, nonatomic) AWENewPublishTableCell *starAtlasTableViewCell;
@property (nonatomic) BOOL isMissionEditable;
@property (nonatomic) BOOL shouldShowStarAtlas;
@property (copy, nonatomic) NSString *starAtlasHashTag;
@property (copy, nonatomic) NSString *starAtlasTip;
@property (copy, nonatomic) NSString *starAtlasTaskID;
@property (retain, nonatomic) AWEPostPageAnchorViewModel *missionAnchorVM;
@property (nonatomic) BOOL isShowTracked;
@property (weak, nonatomic) AWEPostPageElementCenter *elementCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *extras;

+ (void)_aweLazyRegisterPostPage;
+ (Class)aAWEStudioPostPageEntryAdapterClass;
+ (id)type;

- (id)poiService;
- (void)bindServices:(id)a0;
- (void)setupCell:(id)a0;
- (BOOL)anchor:(id)a0 shouldSelectAnchorWithType:(long long)a1;
- (void)refreshWithAnchorVM:(id)a0;
- (BOOL)isAbnormalAnchor;
- (BOOL)forceReceiveEvents;
- (id)matchMission;
- (id)companyTools;
- (id)navBarService;
- (id)aAWEStudioPostPageEntryAdapter;
- (id)localLifeMission;
- (void)checkStarAtlasOrderIfNeeded;
- (void)addStarAtlasRNObservers;
- (void)cleanStarAtlasDraft;
- (void)cleanStarAtlasMissionWhenAnchorCheckFailed;
- (void)p_startAtlasCellClicked;
- (void)handleRNData:(id)a0;
- (void)addStarAtlasInfoFromIronManNotification:(id)a0;
- (void)updateStarAtlasWithJsonDict:(id)a0 from:(unsigned long long)a1;
- (id)getStarAtlasParamsWithPublishModel:(id)a0;
- (void)prepareDataWithJsonDict:(id)a0 from:(unsigned long long)a1;
- (id)jsonDictionaryWithModel:(id)a0;
- (void).cxx_destruct;
- (id)service;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)cleanUp;
- (void)viewDidLoad;
- (id)cellClass;
- (id)cell;
- (id)cellIdentifier;
- (void)didSelect;

@end
