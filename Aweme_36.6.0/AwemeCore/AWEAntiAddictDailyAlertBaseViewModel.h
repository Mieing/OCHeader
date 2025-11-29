@class UIColor, NSString, AWEAntiAddictDailyAlertConfigModel, AWEAntiAddictDailyAlertTitleModel, NSArray, NSNumber, UIImage;

@interface AWEAntiAddictDailyAlertBaseViewModel : NSObject

@property (nonatomic) BOOL isDay;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) unsigned long long viewType;
@property (retain, nonatomic) NSString *dynamicSubTitle;
@property (copy, nonatomic) AWEAntiAddictDailyAlertConfigModel *configModel;
@property (copy, nonatomic) AWEAntiAddictDailyAlertTitleModel *titleModel;
@property (copy, nonatomic) NSString *leftButtonTitle;
@property (copy, nonatomic) NSString *rightButtonTitle;
@property (copy, nonatomic) NSArray *options;
@property (copy, nonatomic) NSNumber *defaultOption;
@property (copy, nonatomic) NSArray *sliderColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (copy, nonatomic) NSArray *optionBgColor;
@property (retain, nonatomic) UIColor *optionTextColor;
@property (copy, nonatomic) NSString *linkText;
@property (copy, nonatomic) NSString *linkTextKeyword;
@property (copy, nonatomic) NSString *linkTextSchema;

- (void)setupDefaultConfig;
- (void)setupBinding;
- (void)updateTitleIfNeed;
- (void)updateBtnTitleIfNeed;
- (void)updateLinkInfoIfNeed;
- (void)updateBGColorIfNeed;
- (void)updateOptionsIfNeed;
- (void)updateOptionColorIfNeed;
- (id)transformOptionAtIndex:(long long)a0;
- (id)mmkvKey;
- (id)colorTransformedFromString:(id)a0;
- (void)setupDefaultConfigForSimplifyView;
- (id)initWithConfigModel:(id)a0 OfDay:(BOOL)a1 ViewType:(unsigned long long)a2;
- (id)alertStyle;
- (void).cxx_destruct;
- (long long)defaultIndex;
- (void)setData;

@end
