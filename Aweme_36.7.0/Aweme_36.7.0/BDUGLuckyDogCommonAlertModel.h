@class NSString, NSArray, BDUGLuckyDogCommonAlertRewardModel, UIImage, NSNumber;

@interface BDUGLuckyDogCommonAlertModel : BDUGLuckyJSONModel

@property (nonatomic) long long popupId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *popupKey;
@property (nonatomic) double tsExpireMs;
@property (nonatomic) double tsShowMs;
@property (copy, nonatomic) NSNumber *priority;
@property (nonatomic) BOOL isColdStart;
@property (nonatomic) BOOL isFeedbackPop;
@property (nonatomic) BOOL notShowOnce;
@property (copy, nonatomic) NSNumber *dialogEnqueue;
@property (nonatomic) BOOL forbidLandscape;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long position;
@property (copy, nonatomic) NSArray *posUrl;
@property (copy, nonatomic) NSArray *iosBlockList;
@property (copy, nonatomic) NSArray *iosAllowList;
@property (nonatomic) long long popupType;
@property (copy, nonatomic) NSString *lynxSchema;
@property (nonatomic) BOOL lynxDoNotCloseOnFailure;
@property (retain, nonatomic) BDUGLuckyDogCommonAlertRewardModel *reward;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *firstFrameData;
@property (nonatomic) BOOL forbiddenColdRequest;
@property (copy, nonatomic) NSString *resourceId;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSArray *buttonBgColor;
@property (copy, nonatomic) NSString *buttonBgUrl;
@property (retain, nonatomic) UIImage *buttonBgImage;
@property (copy, nonatomic) NSString *bgColor;
@property (copy, nonatomic) NSString *closeColor;
@property (copy, nonatomic) NSString *picUrl;
@property (retain, nonatomic) UIImage *mainImage;
@property (nonatomic) BOOL hideCloseBtn;
@property (copy, nonatomic) NSString *callbackUrl;
@property (copy, nonatomic) NSString *activityName;
@property (nonatomic) long long cycleId;
@property (nonatomic) BOOL block;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) double enqueueTime;
@property (nonatomic) BOOL isForce;

- (void).cxx_destruct;

@end
