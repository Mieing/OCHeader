@class UIImageView, IESLiveUserCardStore, IESLiveCircleRollLabel;

@interface IESLiveMyLiveNickNameView : UIView

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (retain, nonatomic) IESLiveCircleRollLabel *nickNameLabel;
@property (retain, nonatomic) UIImageView *gradeImageView;

- (void)gradeImageClicked;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setup;

@end
