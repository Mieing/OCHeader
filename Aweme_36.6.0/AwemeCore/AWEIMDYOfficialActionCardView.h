@class UIStackView, AWENotificationModelNew, UIImageView, UIView, NSMutableArray, UILabel;
@protocol AWEIMDYOfficialTableViewContentImageCellDelegate;

@interface AWEIMDYOfficialActionCardView : UIView

@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) AWENotificationModelNew *model;
@property (retain, nonatomic) UIView *stateView;
@property (retain, nonatomic) UIImageView *stateImageView;
@property (retain, nonatomic) UILabel *stateLabel;
@property (weak, nonatomic) id<AWEIMDYOfficialTableViewContentImageCellDelegate> delegate;

- (void)configButtons;
- (void)addConstrains;
- (void)configWithModel:(id)a0 context:(id)a1 needTrackEvent:(BOOL)a2;
- (void)onButtonAction:(id)a0;
- (void)swithToState:(long long)a0 model:(id)a1;
- (void).cxx_destruct;
- (void)loading;
- (id)init;

@end
