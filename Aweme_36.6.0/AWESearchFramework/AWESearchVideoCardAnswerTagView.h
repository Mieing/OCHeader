@class UIImageView, UILabel, AWEAwemeSearchVideoShortAnswerModel;

@interface AWESearchVideoCardAnswerTagView : UIView

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) AWEAwemeSearchVideoShortAnswerModel *shortAnswerModel;

- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
