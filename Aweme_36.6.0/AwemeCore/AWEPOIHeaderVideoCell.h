@class AWEPOIPhotoModel, AWEPOIVideoPlayerView;
@protocol AWEPOIVideoPlayerDelegate;

@interface AWEPOIHeaderVideoCell : AWEPOIHeaderBaseCell

@property (retain, nonatomic) AWEPOIVideoPlayerView *playerView;
@property (retain, nonatomic) AWEPOIPhotoModel *data;
@property (weak, nonatomic) id<AWEPOIVideoPlayerDelegate> playerDelegate;

- (void)didEndDisplayingCell;
- (void)updateViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateHeight:(double)a0 isMaxUnfold:(BOOL)a1 duration:(double)a2;
- (void)updateHeight:(double)a0 isMaxUnfold:(BOOL)a1;
- (void)didReceiveTripNativeHeaderBgShowNotification;
- (void)didReceiveTripNativeHeaderBgHideNotification;
- (void)updateCurrentMuteStatus;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateData:(id)a0 completion:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateStyle:(unsigned long long)a0;
- (void)setupViews;
- (void)willDisplayCell;

@end
