@class NSArray, NSString;

@interface DetectionResult : BDModel

@property (nonatomic) BOOL pass;
@property (nonatomic) int status;
@property (nonatomic) int threeClassStatus;
@property (nonatomic) long long error;
@property (nonatomic) long long threeClassError;
@property (nonatomic) double blurScore;
@property (nonatomic) long long orientation;
@property (nonatomic) int sdkOri;
@property (nonatomic) int sceneLabel;
@property (nonatomic) int darkLabel;
@property (copy, nonatomic) NSArray *blurConf;
@property (copy, nonatomic) NSArray *orientationConf;
@property (copy, nonatomic) NSArray *sceneLabelConf;
@property (copy, nonatomic) NSArray *darkLabelConf;
@property (retain, nonatomic) NSString *msg;
@property (retain, nonatomic) NSString *threeClassMsg;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) double initCost;
@property (nonatomic) double darkCheckCost;
@property (nonatomic) double preProcessCost;
@property (nonatomic) double featureCheckCost;
@property (nonatomic) double blurCost;
@property (nonatomic) double sceneCost;
@property (nonatomic) double orientationCost;
@property (nonatomic) double sceneOrientationCost;
@property (nonatomic) double predictCost;
@property (nonatomic) double blurThreshold;
@property (retain, nonatomic) NSString *os;
@property (retain, nonatomic) NSString *deviceInfo;
@property (nonatomic) int inOrientation;
@property (nonatomic) int inWidth;
@property (nonatomic) int inHeight;
@property (nonatomic) int in_dims;
@property (nonatomic) BOOL checkOrbFeat;
@property (nonatomic) int stateMachinePrePC;
@property (copy, nonatomic) NSString *stateMachineInfo;
@property (nonatomic) int detectionStatus;
@property (retain, nonatomic) NSString *detectionMsg;
@property (copy, nonatomic) NSArray *boundingBoxes;
@property (copy, nonatomic) NSArray *midboundingBox;
@property (copy, nonatomic) NSArray *rotatedBoxes;
@property (copy, nonatomic) NSArray *quadrilateralBoxes;
@property (copy, nonatomic) NSArray *questionImages;
@property (nonatomic) int midBoxIndex;
@property (nonatomic) double detectionCost;
@property (retain, nonatomic) NSString *test_message;
@property (retain, nonatomic) NSString *test_message_json;
@property (nonatomic) int blur_status;
@property (nonatomic) int scene_status;
@property (nonatomic) int orientation_status;
@property (nonatomic) int dark_status;
@property (nonatomic) int questions_status;
@property (retain, nonatomic) NSString *blur_url;
@property (retain, nonatomic) NSString *scene_url;
@property (retain, nonatomic) NSString *orientation_url;
@property (retain, nonatomic) NSString *dark_url;
@property (retain, nonatomic) NSString *questions_url;

- (void).cxx_destruct;
- (id)init;

@end
