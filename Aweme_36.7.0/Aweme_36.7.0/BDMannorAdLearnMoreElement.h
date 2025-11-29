@class NSString, NSBundle, UIImage, NSNumber;

@interface BDMannorAdLearnMoreElement : NSObject

@property (nonatomic) BOOL isAdLiveTopview;
@property (nonatomic) BOOL appointmentStatus;
@property (nonatomic) BOOL shouldChangeButtonColor;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *clickedButtonText;
@property (copy, nonatomic) NSString *clickedButtonColor;
@property (copy, nonatomic) NSString *adLearnMoreText;
@property (copy, nonatomic) NSString *liveAnimationName;
@property (retain, nonatomic) NSBundle *liveAnimationBundleName;
@property (retain, nonatomic) UIImage *iconArrowFlash;
@property (retain, nonatomic) UIImage *guideImageName;
@property (retain, nonatomic) NSNumber *taskCompletedTime;

- (void).cxx_destruct;

@end
