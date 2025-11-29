@class NSString;

@interface AWEIMGroupSPActionBarSettings : NSObject

@property (nonatomic) BOOL filterAwardTask;
@property (copy, nonatomic) NSString *titleColor;
@property (copy, nonatomic) NSString *titleColorDark;
@property (copy, nonatomic) NSString *titleColorWithBackgroundImage;
@property (copy, nonatomic) NSString *titleColorDarkWithBackgroundImage;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *backgroundColorDark;
@property (copy, nonatomic) NSString *backgroundColorWithBackgroundImage;
@property (copy, nonatomic) NSString *backgroundColorDarkWithBackgroundImage;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
