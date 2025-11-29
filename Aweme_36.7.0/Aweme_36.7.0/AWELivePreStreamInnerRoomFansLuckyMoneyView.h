@class UIImageView, UILabel, UIView;

@interface AWELivePreStreamInnerRoomFansLuckyMoneyView : UIView

@property (nonatomic) BOOL hasClicked;
@property (retain, nonatomic) UIView *activityContainer;
@property (retain, nonatomic) UIImageView *activityIcon;
@property (retain, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) id /* block */ isClickedArea;

- (void)p_setupView;
- (void)updateDisplayText:(id)a0 iconUrl:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
