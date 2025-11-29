@class UIImageView, UILabel;

@interface AWEHotSpotPublishEntranceSingleItemView : AWEHotSpotPublishEntranceBaseView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *text;
@property (nonatomic) long long viewType;

- (void)onShotClicked;
- (void)onDiscussClicked;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)setupUI;

@end
