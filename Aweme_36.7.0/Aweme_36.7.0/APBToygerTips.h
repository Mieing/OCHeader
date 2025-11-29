@class NSString, APBToygerAlertConfig;

@interface APBToygerTips : NSObject

@property (retain, nonatomic) APBToygerAlertConfig *timeoutAlert;
@property (retain, nonatomic) APBToygerAlertConfig *failAlert;
@property (retain, nonatomic) APBToygerAlertConfig *limitAlert;
@property (retain, nonatomic) APBToygerAlertConfig *networkErrorAlert;
@property (retain, nonatomic) APBToygerAlertConfig *interruptAlert;
@property (copy, nonatomic) NSString *sceneText;
@property (copy, nonatomic) NSString *bottomText;
@property (copy, nonatomic) NSString *topText_rectwidth;
@property (copy, nonatomic) NSString *topText_noface;
@property (copy, nonatomic) NSString *topText_face_too_more;
@property (copy, nonatomic) NSString *topText_blur;
@property (copy, nonatomic) NSString *topText_light;
@property (copy, nonatomic) NSString *topText_pitch;
@property (copy, nonatomic) NSString *topText_yaw;
@property (copy, nonatomic) NSString *topText_quality;
@property (copy, nonatomic) NSString *topText_integrity;
@property (copy, nonatomic) NSString *topText_max_rectwidth;
@property (copy, nonatomic) NSString *topText_stay;
@property (copy, nonatomic) NSString *topText_openness;
@property (copy, nonatomic) NSString *topText_blink;
@property (copy, nonatomic) NSString *topText_left_yaw;
@property (copy, nonatomic) NSString *topText_right_yaw;
@property (copy, nonatomic) NSString *topText_mouth_open;
@property (copy, nonatomic) NSString *topText_target_too_far;
@property (copy, nonatomic) NSString *topText_target_too_close;
@property (copy, nonatomic) NSString *topText_calibrate_too_far;
@property (copy, nonatomic) NSString *topText_calibrate_too_close;
@property (copy, nonatomic) NSString *topText_nearFar_collect;
@property (copy, nonatomic) NSString *topText_face_not_in_postion;
@property (copy, nonatomic) NSString *brandTip;
@property (copy, nonatomic) NSString *stopScanTip;
@property (copy, nonatomic) NSString *garfield_guideTitle;
@property (copy, nonatomic) NSString *garfield_guideMsg;
@property (retain, nonatomic) APBToygerAlertConfig *unsurpportAlert;
@property (retain, nonatomic) APBToygerAlertConfig *systemVersionErrorAlert;
@property (retain, nonatomic) APBToygerAlertConfig *systemErrorAlert;
@property (retain, nonatomic) APBToygerAlertConfig *cameraNoPermissionAlert;
@property (retain, nonatomic) APBToygerAlertConfig *exitAlert;
@property (retain, nonatomic) APBToygerAlertConfig *exitAlertForPermission;
@property (retain, nonatomic) APBToygerAlertConfig *authorizationAlert;
@property (retain, nonatomic) APBToygerAlertConfig *failNoRetryAlert;

- (void).cxx_destruct;

@end
