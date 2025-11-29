@class NSString, NSArray, AWEIMCodeGenPetElfScreenShotInfoModel, AWEIMWidgetInfoConsecutiveChatInfoModel;

@interface AWEIMWidgetInfoResponseModel : AWEBaseApiModel

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *avatarURLString;
@property (retain, nonatomic) AWEIMWidgetInfoConsecutiveChatInfoModel *consecutivechatInfo;
@property (copy, nonatomic) NSArray *streakPetElfInfoArray;
@property (copy, nonatomic) NSArray *dynamicStreakPetElfInfoArray;
@property (retain, nonatomic) AWEIMCodeGenPetElfScreenShotInfoModel *screenShotInfo;
@property (copy, nonatomic) NSString *msgHint;
@property (copy, nonatomic) NSString *msgContent;
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
