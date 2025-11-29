@class NSString, NSArray, UIImage, BDUGLuckyPendantTipsConfModel;
@protocol BDUGLuckyPendantStateContentModel;

@interface BDUGLuckyCountDownPendantInfoModel : BDUGLuckyJSONModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *position;
@property (copy, nonatomic) NSString *iconUrlComplete;
@property (copy, nonatomic) NSString *iconUrlDoing;
@property (copy, nonatomic) NSArray *tabBg;
@property (copy, nonatomic) NSString *processBarColor;
@property (copy, nonatomic) NSString *processBarBackgroundColor;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) BOOL processBarEnable;
@property (copy, nonatomic) NSString *completionToast;
@property (copy, nonatomic) NSString *completeFailureToast;
@property (copy, nonatomic) NSArray<BDUGLuckyPendantStateContentModel> *stateContents;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) BDUGLuckyPendantTipsConfModel *tipsConf;
@property (nonatomic) long long exitDuration;
@property (copy, nonatomic) UIImage *iconUrlCompleteImage;
@property (copy, nonatomic) UIImage *iconUrlDoingImage;

- (void).cxx_destruct;

@end
