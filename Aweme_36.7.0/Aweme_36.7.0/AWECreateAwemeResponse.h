@class AWEWelfareMatchDonateResult, AWEAwemeDraftModel, NSArray, NSString, AWECouponModel, AWESchoolLifePostResultModel, AFDSocialPitayaShareInfo, AWECreateAwemeCommentInfoModel, AWETC21PostLottieModel, AWENotifyExtraModel;

@interface AWECreateAwemeResponse : ACCBaseApiModel

@property (retain, nonatomic) id aweme;
@property (retain, nonatomic) AWECouponModel *coupon;
@property (retain, nonatomic) NSArray *notify;
@property (retain, nonatomic) AWENotifyExtraModel *notifyExtra;
@property (retain, nonatomic) AWENotifyExtraModel *afterPublishAlertTip;
@property (retain, nonatomic) AWEAwemeDraftModel *draft;
@property (nonatomic) BOOL reviewVideo;
@property (nonatomic) BOOL hasStickerRedPacket;
@property (nonatomic) BOOL banPublishShareToast;
@property (copy, nonatomic) NSString *stickerRedPacketToken;
@property (copy, nonatomic) NSString *secondVerifyType;
@property (nonatomic) BOOL addAvatarDecoration;
@property (copy, nonatomic) NSString *activityH5Url;
@property (copy, nonatomic) NSString *activityToast;
@property (retain, nonatomic) AWEWelfareMatchDonateResult *matchDonateResult;
@property (retain, nonatomic) AWETC21PostLottieModel *lottieInfo;
@property (nonatomic) BOOL isFollowShootWay;
@property (retain, nonatomic) AWESchoolLifePostResultModel *schoolLifePostResult;
@property (nonatomic) long long fixedStoryTTLMinute;
@property (retain, nonatomic) AWECreateAwemeCommentInfoModel *commentInfo;
@property (retain, nonatomic) AFDSocialPitayaShareInfo *socialPitayaShareInfo;

+ (id)awemeJSONTransformer;
+ (id)commentInfoJSONTransformer;
+ (id)notifyExtraJSONTransformer;
+ (id)afterPublishAlertTipJSONTransformer;
+ (id)lottieInfoJSONTransformer;
+ (id)schoolLifePostResultJSONTransformer;
+ (id)socialPitayaShareInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)couponJSONTransformer;

- (void).cxx_destruct;

@end
