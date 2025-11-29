@class NSString, NSDictionary, NSTimer, NSNumber;

@interface BDASplashLogoViewModel : NSObject

@property (copy, nonatomic) NSDictionary *logoInfo;
@property (copy, nonatomic) NSDictionary *skipInfo;
@property (copy, nonatomic) NSString *predownloadText;
@property (retain, nonatomic) NSNumber *splashBannerMode;
@property (nonatomic) BOOL displaySkipButton;
@property (nonatomic) unsigned long long logoColor;
@property (nonatomic) long long remainedSeconds;
@property (retain, nonatomic) NSTimer *skipButtonTimer;
@property (nonatomic) double splashDisplayTime;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
