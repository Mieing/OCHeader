@class NSNumber, NSString, NSDictionary;

@interface AWEIMInputActionBarCustomizeShowInfoModel : NSObject

@property (nonatomic) BOOL isHidden;
@property (retain, nonatomic) NSNumber *typeWrapper;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *iconUrl_darkMode;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schemeUrl;
@property (retain, nonatomic) NSNumber *countdownEndTime;
@property (retain, nonatomic) NSNumber *hideWhenCoutDownEnd;
@property (copy, nonatomic) NSString *titleColor;
@property (copy, nonatomic) NSString *titleColorDark;
@property (copy, nonatomic) NSString *titleColorWithBackgroundImage;
@property (copy, nonatomic) NSString *titleColorDarkWithBackgroundImage;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *backgroundColorDark;
@property (copy, nonatomic) NSString *backgroundColorWithBackgroundImage;
@property (copy, nonatomic) NSString *backgroundColorDarkWithBackgroundImage;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSDictionary *dynamicExt;

- (void).cxx_destruct;

@end
