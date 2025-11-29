@class AWEURLModel, AWEInteractModularizationHotsoonFlameModel, AWEInteractThanksDiggModel, AWENoticeContentResourceModel, AWENoticeLiteInteractionInfoModel, AWENoticeImageUrlStructModel, NSMutableAttributedString, NSString, AWEInteractModularizationNoticeTrackerParams, AWEInteractModularizationOptionInfoModel, AWEInteractModularizationButtonModel, AWEInteractAdditionalInfoModel, AWEAwemeModel, NSArray, AWECommentNotificationModel, AWEInteractModularizationActionInfoModel, AWEInteractModularizationTextModel;

@interface AWEInteractGeneralNoticeModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) AWEInteractModularizationTextModel *title;
@property (copy, nonatomic) NSString *author;
@property (nonatomic) long long subType;
@property (retain, nonatomic) NSArray *fromUser;
@property (retain, nonatomic) AWEURLModel *coverImageUrl;
@property (retain, nonatomic) AWEURLModel *avatarImageUrl;
@property (retain, nonatomic) AWEURLModel *typeImageUrl;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) long long labelType;
@property (copy, nonatomic) NSString *labelTrack;
@property (copy, nonatomic) NSArray *fansTagArray;
@property (nonatomic) long long avatarType;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *avatarSchema;
@property (copy, nonatomic) NSString *cellSchema;
@property (copy, nonatomic) NSString *coverSchema;
@property (copy, nonatomic) NSString *normalParams;
@property (nonatomic) double contentH;
@property (retain, nonatomic) NSMutableAttributedString *displayTitle;
@property (nonatomic) double descAndTimestampH;
@property (copy, nonatomic) NSString *descAndTime;
@property (retain, nonatomic) AWEInteractModularizationNoticeTrackerParams *trackerParams;
@property (nonatomic) unsigned long long noticeDisableType;
@property (nonatomic) unsigned long long timePeriod;
@property (copy, nonatomic) NSString *noticeDisableText;
@property (copy, nonatomic) NSString *dynamicSchema;
@property (copy, nonatomic) NSString *uniqType;
@property (retain, nonatomic) AWEInteractModularizationButtonModel *button;
@property (nonatomic) long long coverType;
@property (nonatomic) long long isDeteled;
@property (nonatomic) long long contentOffset;
@property (nonatomic) long long liteInteraction;
@property (retain, nonatomic) AWEInteractThanksDiggModel *thankDiggInfoModel;
@property (retain, nonatomic) AWECommentNotificationModel *comment;
@property (retain, nonatomic) AWEInteractModularizationActionInfoModel *actionInfoModel;
@property (retain, nonatomic) AWEInteractModularizationHotsoonFlameModel *hotsoonFlameModel;
@property (retain, nonatomic) AWEInteractModularizationOptionInfoModel *optionInfoModel;
@property (retain, nonatomic) AWENoticeLiteInteractionInfoModel *liteInteractionInfo;
@property (copy, nonatomic) NSString *supplement;
@property (copy, nonatomic) NSArray *actionBarModelArray;
@property (copy, nonatomic) NSArray *imageUrlList;
@property (retain, nonatomic) AWEInteractAdditionalInfoModel *additionalInfo;
@property (retain, nonatomic) NSArray *contentTextFormats;
@property (retain, nonatomic) AWENoticeContentResourceModel *contentResource;
@property (retain, nonatomic) AWENoticeImageUrlStructModel *imageUrlsStruct;

+ (id)awemeJSONTransformer;
+ (id)fansTagArrayJSONTransformer;
+ (id)commentJSONTransformer;
+ (id)buttonJSONTransformer;
+ (id)additionalInfoJSONTransformer;
+ (id)fromUserJSONTransformer;
+ (id)actionBarModelArrayJSONTransformer;
+ (id)coverImageUrlJSONTransformer;
+ (id)avatarImageUrlJSONTransformer;
+ (id)typeImageUrlJSONTransformer;
+ (id)actionInfoModelJSONTransformer;
+ (id)hotsoonFlameModelJSONTransformer;
+ (id)imageUrlListJSONTransformer;
+ (id)thankDiggInfoModelJSONTransformer;
+ (id)optionInfoModelJSONTransformer;
+ (id)liteInteractionInfoJSONTransformer;
+ (id)contentTextFormatsJSONTransformer;
+ (id)contentResourceJSONTransformer;
+ (id)imageUrlsStructJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
