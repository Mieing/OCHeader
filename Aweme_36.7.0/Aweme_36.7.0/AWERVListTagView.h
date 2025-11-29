@class UIImageView, UILabel, UIView;

@interface AWERVListTagView : UIView

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *contentLabel;

- (void)updateWithTagTypeAndStyle:(id)a0 style:(long long)a1 content:(id)a2;
- (id)iconImageWithTagType:(id)a0;
- (void)setupUIWithIcon:(BOOL)a0;
- (void)updateWithTagType:(id)a0 content:(id)a1 isWaterFlow:(BOOL)a2;
- (void).cxx_destruct;

@end
