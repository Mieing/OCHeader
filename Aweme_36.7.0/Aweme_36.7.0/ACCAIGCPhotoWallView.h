@class NSTimer, UILabel, UITapGestureRecognizer, ACCAIGCLibraryActionView, ACCAIGCRecordListDataSource, NSString, CAGradientLayer, NSMutableArray, UIPageControl, UIScrollView;
@protocol ACCAIGCPhotoWallViewDelegate;

@interface ACCAIGCPhotoWallView : UICollectionReusableView <UIScrollViewDelegate, ACCAIGCLibraryActionDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UILabel *pageLabel;
@property (retain, nonatomic) CAGradientLayer *topGradientLayer;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (nonatomic) double ratio;
@property (retain, nonatomic) NSMutableArray *imageViewArray;
@property (retain, nonatomic) ACCAIGCLibraryActionView *actionView;
@property (retain, nonatomic) ACCAIGCRecordListDataSource *dataSource;
@property (nonatomic) BOOL isReportedMonitor;
@property (weak, nonatomic) id<ACCAIGCPhotoWallViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)avatarViewClicked;
- (void)bindObserver;
- (void)updateCollectionHeader:(BOOL)a0;
- (void)nextPageViewClicked;
- (void)customKeyWordViewClicked;
- (void)pulldownToZoom:(double)a0;
- (void)createWithDataSource:(id)a0 ratio:(double)a1;
- (void)updateWallContent;
- (void)initScrollView;
- (void)p_trackLoraWallFirstFrame;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)endTimer;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (long long)pageCount;
- (void)setupTimer;
- (void)setupUI;
- (void)nextPage;
- (void)tapAction;

@end
