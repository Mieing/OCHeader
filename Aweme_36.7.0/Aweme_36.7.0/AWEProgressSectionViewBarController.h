@class NSString, AWEProgressSectionViewContext, AWEAwemeModel, UIView;
@protocol AWEModernFeedProgressSectionViewProtocol;

@interface AWEProgressSectionViewBarController : NSObject <AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView<AWEModernFeedProgressSectionViewProtocol> *progressSectionView;
@property (retain, nonatomic) AWEProgressSectionViewContext *context;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)updatePlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (id)getCommonTrackParams;
- (BOOL)chapterListLegal:(id)a0;
- (void)videoChapterShowTrack;
- (void)videoChapterClickTrackWithSelectedIndex:(unsigned long long)a0 currentIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (Class)contextClass;
- (id)bottomBarView;

@end
