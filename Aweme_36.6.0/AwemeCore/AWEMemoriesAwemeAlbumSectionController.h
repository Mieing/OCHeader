@class NSTimer, UIViewController, NSString;
@protocol AWEPlayVideoViewControllerProtocol;

@interface AWEMemoriesAwemeAlbumSectionController : AWEBaseListSectionController <AWEListSectionControllerDelegate, AWEMemoriesPlayerSectionControllerProtocol>

@property (weak, nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> *player;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sectionControllerWillDisplay:(id)a0;
- (void)sectionControllerDidEndDisplaying:(id)a0;
- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (void)p_startTimer;
- (void)playSection;
- (void)pauseSection;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (Class)cellClass;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (void)timerAction;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)restartTimer;

@end
