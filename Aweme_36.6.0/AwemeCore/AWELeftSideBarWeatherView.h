@class DUXBaseImageView, AWELeftSideBarWeatherModel, NSString, AWEHPSideBarWeatherUIConfig, UILabel, AWELeftSideBarWeatherLabel, UIView;

@interface AWELeftSideBarWeatherView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWELeftSideBarWeatherLabel *temperatureLabel;
@property (retain, nonatomic) UILabel *desLabel;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) DUXBaseImageView *arrowImage;
@property (retain, nonatomic) AWELeftSideBarWeatherModel *weather;
@property (nonatomic) BOOL expandHotspot;
@property (copy, nonatomic) NSString *preRequestTag;
@property (nonatomic) BOOL isBigFontModeOn;
@property (retain, nonatomic) AWEHPSideBarWeatherUIConfig *uiConfig;
@property (nonatomic) BOOL hasShown;
@property (copy, nonatomic) id /* block */ sideWeatherTapBlock;

- (void)trackShowEvent;
- (BOOL)enablePrefetch;
- (id)searchSchema;
- (void)updateWeatherView:(id)a0;
- (void)trackClickEvent;
- (void)didTapWeatherView;
- (void)handleTouchBegin;
- (void)handleTouchCancel;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
