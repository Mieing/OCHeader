@class UIView;
@protocol AWEModernFeedProgressSectionViewProtocol;

@interface AWEPlayInteractionProgressSectionElement : AWEPlayInteractionLeftElement

@property (retain, nonatomic) UIView<AWEModernFeedProgressSectionViewProtocol> *progressSectionView;
@property (nonatomic) double playTime;

- (void)initializeElement;
- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (id)getCommonTrackParams;
- (BOOL)chapterListLegal:(id)a0;
- (void)videoChapterShowTrack;
- (void)videoChapterClickTrackWithSelectedIndex:(unsigned long long)a0 currentIndex:(unsigned long long)a1;
- (void)updateProgressSectionViewWithPlayTime:(double)a0;
- (BOOL)currentPlayerHasSectionInfo;
- (void)p_updateModel;
- (void)p_initUI;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
