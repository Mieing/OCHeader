@class NSString, NSArray, AWEIMCodeGenPetElfScreenShotInfoModel, AWEIMWidgetInfoConsecutiveChatInfoModel, AWEIMWidgetInfoResponseModelDot;

@interface AWEIMWidgetInfoResponseModel : AWEBaseApiModel

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *avatarURLString;
@property (copy, nonatomic) NSString *avatarTitle;
@property (copy, nonatomic) NSString *avatarSubtitle;
@property (copy, nonatomic) NSString *avatarSubtitleColor;
@property (copy, nonatomic) NSString *avatarBGColor;
@property (retain, nonatomic) AWEIMWidgetInfoResponseModelDot *avatarDot;
@property (retain, nonatomic) AWEIMWidgetInfoConsecutiveChatInfoModel *consecutivechatInfo;
@property (copy, nonatomic) NSArray *streakPetElfInfoArray;
@property (copy, nonatomic) NSArray *dynamicStreakPetElfInfoArray;
@property (retain, nonatomic) AWEIMCodeGenPetElfScreenShotInfoModel *screenShotInfo;
@property (copy, nonatomic) NSString *msgHint;
@property (copy, nonatomic) NSString *msgContent;
@property (copy, nonatomic) NSString *msgBackgroundURLString;
@property (copy, nonatomic) NSString *msgBackgroundSKey;
@property (copy, nonatomic) NSString *showType;
@property (copy, nonatomic) NSString *guideDynamicImage;
@property (copy, nonatomic) NSString *guideStaticImage;

+ (id)propertyToModelClassInArrayMap;
+ (id)avatarDotJSONTransformer;
+ (id)consecutivechatInfoJSONTransformer;
+ (id)streakPetElfInfoArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)currentStreakPetElfInfoModel;
- (id)currentDynamicStreakPetElfInfoModel;
- (void).cxx_destruct;

@end
