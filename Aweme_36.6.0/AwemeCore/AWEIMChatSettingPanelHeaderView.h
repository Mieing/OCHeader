@class UIImageView, UILabel, AWEIMChatSettingPanelHeaderViewProps;

@interface AWEIMChatSettingPanelHeaderView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWEIMChatSettingPanelHeaderViewProps *props;
@property (nonatomic) double titleHeight;
@property (nonatomic) double subtitleHeight;

+ (id)commonTitleAttrStringWithString:(id)a0;
+ (id)commonSubtitleAttrStringWithString:(id)a0;

- (id)initWithProps:(id)a0;
- (void)addSubviews;
- (void)setupLabelTextsWithProps:(id)a0;
- (void)layoutSubviewsWithProps:(id)a0;
- (void).cxx_destruct;
- (double)headerViewHeight;

@end
