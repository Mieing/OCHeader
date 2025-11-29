@class AWEGCPStrategyDetailComponentView, AWEGCPAwemeModel, NSString;
@protocol AWEGCPStrategyVideoTableViewCellDelegate;

@interface AWEGCPStrategyVideoTableViewCell : UITableViewCell <AWEGCPStrategyDetailComponentViewDelegate, AWEGCPStrategyCellProtocol>

@property (retain, nonatomic) AWEGCPStrategyDetailComponentView *videoPlayerView;
@property (retain, nonatomic) AWEGCPAwemeModel *gameAwemeModel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentViewEdgeInsets;
@property (nonatomic) long long viewStyle;
@property (nonatomic) unsigned long long rectCorner;
@property (copy, nonatomic) id /* block */ exposedHandle;
@property (copy, nonatomic) id /* block */ speakerButtonDidClicked;
@property (weak, nonatomic) id<AWEGCPStrategyVideoTableViewCellDelegate> delegate;
@property (copy, nonatomic) id /* block */ onTapSeeMoreButton;
@property (copy, nonatomic) id /* block */ playViewDidClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackTotalPlayTimeWithModel:(id)a0 playTime:(double)a1 isFinish:(BOOL)a2;
- (void)updateLayoutWithViewStyle:(long long)a0;
- (void)setUpWithDIContext:(id)a0;
- (void)updateWithModel:(id)a0 isMute:(BOOL)a1 maxWidth:(double)a2 diContext:(id)a3;
- (void)updateItemViewLayoutIfNeeded;
- (void).cxx_destruct;
- (id)cellContentView;

@end
