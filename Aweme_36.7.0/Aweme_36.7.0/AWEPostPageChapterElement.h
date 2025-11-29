@class AWENewPublishChapterTableViewCell;

@interface AWEPostPageChapterElement : AWEPostPageCellElement

@property (retain, nonatomic) AWENewPublishChapterTableViewCell *chapterCell;
@property (nonatomic) BOOL isChapterSupportShort;
@property (nonatomic) double minVideoDurationMillis;
@property (nonatomic) BOOL hasStarAlasBeenAdded;

+ (Class)aAWEStudioPublishAwemeAdapterClass;
+ (Class)aACCMidVideoCreationProtocolClass;
+ (void)_aweLazyRegisterPostPage;
+ (Class)aAWEStudioChapterAdapterClass;
+ (id)type;

- (id)starAtlas;
- (void)p_addObserver;
- (BOOL)isAlbumVideo;
- (id)aAWEStudioPublishAwemeAdapter;
- (id)aACCMidVideoCreationProtocol;
- (void)setupCell:(id)a0;
- (BOOL)forceReceiveEvents;
- (id)aAWEStudioChapterAdapter;
- (void)showChapterTrack;
- (void)reloadChapterElement:(id)a0;
- (void)showChapterEditPage;
- (void).cxx_destruct;
- (id)init;
- (id)service;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)cell;
- (void)didSelect;

@end
