@class NSString, AWESearchVideoCardChapterListView, AWEGeneralSearchVideoCardModel, UIView, NSMutableArray;

@interface AWESearchVideoCardChapterListComponent : AWESearchComponent <AWESearchVideoCardChapterListComponentProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWESearchVideoCardChapterListView *chapterListView;
@property (nonatomic) BOOL currentModelFromSetupModelOnly;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *bindedModel;
@property (retain, nonatomic) NSMutableArray *receiveProtocolArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })p_calculateComponentSize:(double)a0 withModel:(id)a1;
+ (BOOL)fixChapterListCrashV2;
+ (BOOL)fixChapterListPlay;

- (void)player:(id)a0 updatePlayProgressWithTime:(double)a1 totalDuration:(double)a2;
- (void)playerWillStartNextLoopFinished:(id)a0;
- (void)playerPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (id)playerProvider;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (void)componentViewPrepareForReuse;
- (id)receiveProtocolList;
- (id)p_context;
- (void)configChapterListLogExtra;
- (void)p_updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;
- (void)setupUI;

@end
