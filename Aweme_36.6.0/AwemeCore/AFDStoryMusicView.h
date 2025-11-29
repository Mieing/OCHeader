@class UIImageView, UILabel;

@interface AFDStoryMusicView : UIView

@property (retain, nonatomic) UIImageView *musicIcon;
@property (retain, nonatomic) UILabel *musicNameLabel;
@property (retain, nonatomic) UIImageView *enterTipIcon;

- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
