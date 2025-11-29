@class NSString, NSArray, UIColor;

@interface AWEAddWidgetGuideModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *guideImagePath;
@property (copy, nonatomic) NSArray *guideImageURLs;
@property (copy, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) UIColor *buttonTitleColor;
@property (retain, nonatomic) UIColor *buttonBackgroundColor;
@property (copy, nonatomic) NSString *contentImagePath;
@property (copy, nonatomic) NSArray *contentImageURLs;

- (void).cxx_destruct;

@end
