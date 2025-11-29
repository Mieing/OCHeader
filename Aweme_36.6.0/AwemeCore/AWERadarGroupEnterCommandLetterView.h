@class UILabel, AWERadarSpringActivityConfigModel, UIView;

@interface AWERadarGroupEnterCommandLetterView : UIView

@property (retain, nonatomic) UILabel *letter;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) AWERadarSpringActivityConfigModel *configModel;

- (void)displayEmptyView;
- (void)displayLetterLabel:(id)a0;
- (void)setLetterInvalid;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
