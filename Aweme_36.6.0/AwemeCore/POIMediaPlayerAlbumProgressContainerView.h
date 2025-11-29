@class NSString, POIMediaPlayerAlbumProgressContainerConfig, UIView, NSMutableArray, UIPanGestureRecognizer;
@protocol POIMediaPlayerAlbumProgressContainerViewDelegate;

@interface POIMediaPlayerAlbumProgressContainerView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) NSMutableArray *progressArr;
@property (nonatomic) long long progressTotalCount;
@property (nonatomic) unsigned long long currentProgressIndex;
@property (retain, nonatomic) POIMediaPlayerAlbumProgressContainerConfig *config;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (weak, nonatomic) id<POIMediaPlayerAlbumProgressContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)progressContainerViewTouchBegan;
- (void)progressContainerViewValueChangedWithOffsetX:(double)a0;
- (void)progressContainerViewTouchEnded;
- (id)initWithCurrentIndex:(long long)a0 totalCount:(long long)a1 config:(id)a2;
- (void)updateProgressWithDuration:(double)a0 totalCount:(long long)a1 currentIndex:(long long)a2 currentProcess:(double)a3 needAnimation:(BOOL)a4;
- (void)tapProgressView:(id)a0;
- (id)createProgressView;
- (void).cxx_destruct;
- (void)reset;
- (id)currentProgress;
- (void)panGesture:(id)a0;

@end
