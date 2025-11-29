@class NSString, UIImageView, NSTimer, UILabel;
@protocol AWEListenFeedDrawBackCellDelegate;

@interface AWEListenFeedDrawBackCell : UICollectionViewCell <AWEListenFeedDrawBackCellProtocol, AWEListenFeedCellProtocol>

@property (retain, nonatomic) UILabel *scrollTipLabel;
@property (retain, nonatomic) UIImageView *moreImageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long count;
@property (weak, nonatomic) id<AWEListenFeedDrawBackCellDelegate> delegate;
@property (nonatomic) BOOL isLastCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)playVideoViewController;
- (id)coverImageView;
- (BOOL)playIfNeeded;
- (void)startCountDown;
- (id)interactionVC;
- (void)setSomeViewHidden:(BOOL)a0;
- (void)stopCountDowm;
- (void)showOrHideBottomDiversionView:(BOOL)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)recordPlayTime;
- (void)reStartCountDownIfNeed;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (id)gradientView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)controlView;
- (void)setUpUI;

@end
