@class AWEGCPLiveItemView, AWEGCPAwemeModel, NSString;

@interface AWEGCPStrategyLiveTableViewCell : UITableViewCell <AWEGCPStrategyCellProtocol>

@property (retain, nonatomic) AWEGCPLiveItemView *liveItemView;
@property (retain, nonatomic) AWEGCPAwemeModel *gameAwemeModel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentViewEdgeInsets;
@property (nonatomic) long long viewStyle;
@property (nonatomic) unsigned long long rectCorner;
@property (copy, nonatomic) id /* block */ exposedHandle;
@property (copy, nonatomic) id /* block */ speakerButtonDidClicked;
@property (copy, nonatomic) id /* block */ playViewDidClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithModel:(id)a0 isMute:(BOOL)a1 maxWidth:(double)a2;
- (void)updateLayoutWithViewStyle:(long long)a0;
- (void)updateItemViewLayoutIfNeeded;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)cellContentView;
- (void)setup;

@end
