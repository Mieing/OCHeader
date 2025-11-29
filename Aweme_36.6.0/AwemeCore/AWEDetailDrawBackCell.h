@class AWEAwemeModel, NSString, NSTimer, AWEFeedCellViewController, UIView, UIImageView, UIViewController, UILabel;
@protocol UIScrollViewDelegate, AWEDetailDrawBackCellDelegate;

@interface AWEDetailDrawBackCell : UITableViewCell <AWEFeedTableViewCellProtocol, AWEDetailDrawBackCellProtocol>

@property (retain, nonatomic) AWEFeedCellViewController *viewController;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UILabel *scrollTipLabel;
@property (retain, nonatomic) UIImageView *moreImageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long count;
@property (nonatomic) BOOL removedChildViewForMemoryOpt;
@property (nonatomic) long long indexPath;
@property (weak, nonatomic) UIViewController *parentVC;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *registerElementModel;
@property (nonatomic) long long cellDisplayState;
@property (nonatomic) long long cellPageAppearState;
@property (copy, nonatomic) id /* block */ currentCellPageAppearStateBlock;
@property (nonatomic) struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *audioWrapper;
@property (nonatomic) struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *videoWrapper;
@property (nonatomic) BOOL didResetForReusable;
@property (retain, nonatomic) UIView *feedTableViewCellMaskView;
@property (readonly, weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) BOOL hadPrepareToDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEDetailDrawBackCellDelegate> delegate;
@property (nonatomic) BOOL isLastCell;

- (void)configWithModel:(id)a0;
- (void)removeCellChildVCForMemoryOpt;
- (void)starCountDown;
- (void)reStarCountDownIfNeed;
- (void)setSomeViewHidden:(BOOL)a0;
- (void)stopCountDowm;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)stop;
- (void)reset;
- (void)configureWithModel:(id)a0;
- (void)setUpUI;

@end
