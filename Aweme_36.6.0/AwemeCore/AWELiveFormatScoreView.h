@class UIImageView, UILabel, UIView;

@interface AWELiveFormatScoreView : UIView

@property (retain, nonatomic) UIImageView *leftIcon;
@property (retain, nonatomic) UILabel *leftName;
@property (retain, nonatomic) UIView *scoreContianer;
@property (retain, nonatomic) UILabel *leftGoal;
@property (retain, nonatomic) UILabel *rightGoal;
@property (retain, nonatomic) UILabel *startTime;
@property (retain, nonatomic) UILabel *rightName;
@property (retain, nonatomic) UIImageView *rightIcon;

- (void)updateToShowTime:(id)a0;
- (void)updateLeft:(id)a0 withIcon:(id)a1;
- (void)updateRight:(id)a0 withIcon:(id)a1;
- (void)updateScore:(id)a0 and:(id)a1;
- (void)cleanScoreViewAllData;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
