@class UIView, NSString, WCFinderAnimationLoadingView, WCFinderMusicFeedVM, UIImageView, UIButton, MMMusicPlayerContoller, WCFinderProgressView, UILabel;
@protocol WCFinderProfileMusicViewDelegate;

@interface WCFinderProfileMusicView : UIView <WCFinderMusicFeedVMExt, MMMusicPlayerContollerDelegate>

@property (retain, nonatomic) UIView *accessiblityView;
@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) UIView *viewCountContainer;
@property (retain, nonatomic) UILabel *viewCountLabel;
@property (retain, nonatomic) UIImageView *likeIconView;
@property (retain, nonatomic) UIImageView *mvIconView;
@property (retain, nonatomic) MMMusicPlayerContoller *musicPlayerCtrl;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UIImageView *failedIconView;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) UIButton *delButton;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) WCFinderProgressView *progressView;
@property (retain, nonatomic) UIView *leftContainer;
@property (retain, nonatomic) UIView *rightContainer;
@property (retain, nonatomic) WCFinderMusicFeedVM *feedVM;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *oldObserveKey;
@property (nonatomic) BOOL isFirstRow;
@property (weak, nonatomic) id<WCFinderProfileMusicViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)displayHeightWithIndexPath:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setupUI;
- (void)addSubviews:(id)a0 toRoot:(id)a1;
- (void)update:(id)a0 type:(unsigned long long)a1 isFirstRow:(BOOL)a2;
- (void)updateLabel:(id)a0 hidden:(BOOL)a1 text:(id)a2 fatWidth:(double)a3;
- (void)updateTypeInfo:(id)a0;
- (BOOL)updateCoverViewWithMediaInfo:(id)a0 coverUrl:(id)a1;
- (id)fetchCovertDisplayViewFromContainer:(id)a0 viewClass:(Class)a1;
- (id)statusTextForStatus:(long long)a0;
- (void)layoutSubviews;
- (void)layoutContainer:(id)a0 spacing:(double)a1 maxWidth:(double)a2;
- (void)layoutRightViewWithStyle:(long long)a0;
- (BOOL)displayAlignCenterWithStyle:(long long)a0;
- (void)layoutArrangeViews:(id)a0 originX:(double)a1;
- (id)curThumbImage;
- (void)feedVMDidUpdate:(id)a0;
- (void)feedVMProgressDidUpdate:(id)a0;
- (void)onClickToPlayMusic:(id)a0 playState:(long long)a1 clickedOnBtn:(BOOL)a2;
- (id)createButton:(id)a0 iconName:(id)a1 action:(SEL)a2;
- (void)configLoadingView:(id)a0 hidden:(BOOL)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)onClickRetry;
- (void)onClickDelete;
- (void)onFeedContent:(id)a0 likedDataChanged:(id)a1;
- (id)collectionCell;
- (void).cxx_destruct;

@end
