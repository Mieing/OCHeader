@class NSString, UIImageView, UILabel, UITapGestureRecognizer;
@protocol AWEIMCellLiveIndicatorViewDelegate;

@interface AWEIMCellLiveIndicatorView : UIView <AWEIMMessageTabLiveIndicatorImageSubscriber>

@property (retain, nonatomic) UIImageView *colorRingView;
@property (retain, nonatomic) UIImageView *statusBGView;
@property (retain, nonatomic) UILabel *liveStatusLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<AWEIMCellLiveIndicatorViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_removeTapGesture;
- (void)updateContent:(id)a0 needShowRingView:(BOOL)a1 enableClick:(BOOL)a2;
- (void)p_addTapGestureIfNeeded;
- (void)p_handleTap;
- (void)onLiveIndicatorRingImageUpdate:(id)a0;
- (void)onLiveIndicatorStatusLabelBGImageUpdate:(id)a0;
- (void)p_initUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
