@class AWELiveCardTopInfoTagView, UILabel, AWELiveCardTopInfoInsetLabel;

@interface AWELiveCardTopInfoView : UIView

@property (retain, nonatomic) AWELiveCardTopInfoTagView *tagView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWELiveCardTopInfoInsetLabel *subTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabelThin;

- (id)createStackView;
- (id)createSubTitleLabel;
- (id)createSubTitleLabelThin;
- (void)updateWithFirstTagTitle:(id)a0 secondTagTitle:(id)a1 tagType:(long long)a2 titleLabel:(id)a3 subTitleLabel:(id)a4 subTitleLabelThin:(id)a5;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)createTitleLabel;

@end
