@protocol AWEPostPageStarAtlasService;

@interface AWEPostPageMissionElement : AWEPostPageCellElement

@property (nonatomic) BOOL isShowTracked;
@property (weak, nonatomic) id<AWEPostPageStarAtlasService> starAtlas;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (id)missionCell;
- (void)setupCell:(id)a0;
- (id)companyTools;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)viewDidLoad;
- (id)cell;

@end
