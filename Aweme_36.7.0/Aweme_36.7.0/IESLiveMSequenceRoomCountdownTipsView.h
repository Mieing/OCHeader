@class UILabel, NSTimer;

@interface IESLiveMSequenceRoomCountdownTipsView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSTimer *timerCount;

- (void)startNextAnchorCountDown:(long long)a0 completion:(id /* block */)a1;
- (id)titleLabelString:(long long)a0;
- (void).cxx_destruct;
- (id)initWithDuration:(long long)a0;
- (void)setupViews;

@end
