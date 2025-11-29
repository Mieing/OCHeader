@class UIColor, NSString, NSDictionary, UIWindowScene, ADFeelGoodInfo, UIViewController;

@interface ADFeelGoodOpenModel : NSObject

@property (retain, nonatomic) ADFeelGoodInfo *infoModel;
@property (nonatomic) long long openType;
@property (weak, nonatomic) UIViewController *parentVC;
@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) NSDictionary *extraUserInfo;
@property (nonatomic) BOOL needLoading;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) BOOL useBullet;
@property (copy, nonatomic) NSString *geckoSurveyURL;
@property (weak, nonatomic) UIWindowScene *windowScene;

- (id)infoModel;
- (void)setInfoModel:(id)a0;
- (void).cxx_destruct;

@end
