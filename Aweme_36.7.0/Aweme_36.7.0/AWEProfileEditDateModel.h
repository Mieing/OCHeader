@class UIColor, NSString, NSDateFormatter, UIViewController;

@interface AWEProfileEditDateModel : NSObject

@property (retain, nonatomic) UIViewController *controller;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL showHideSwitch;
@property (nonatomic) BOOL switchIsOn;
@property (nonatomic) BOOL showCancelButton;
@property (copy, nonatomic) NSString *birthday;
@property (retain, nonatomic) NSDateFormatter *customDateFormatter;
@property (nonatomic) BOOL disableDayLightSavingTimeOffset;

- (void).cxx_destruct;

@end
