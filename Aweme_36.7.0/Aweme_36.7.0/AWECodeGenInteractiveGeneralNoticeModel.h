@class AWECodeGenAdditionalInfoModel, AWECodeGenInteractiveTitleModel, NSDictionary, AWECodeGenImageUrlsModel, AWECodeGenGeneralNoticeButtonModel, NSString, AWECodeGenCommentNoticeModel, AWECodeGenAwemeModel, AWECodeGenLiteInteractionInfoModel, AWECodeGenDanmakuInfoModel, AWECodeGenContentResourceModel, NSArray, AWECodeGenUrlModel, AWECodeGenNoticeButtonModel, AWECodeGenInteractiveNoticeActionModel, AWECodeGenSubContentModel;

@interface AWECodeGenInteractiveGeneralNoticeModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) AWECodeGenInteractiveTitleModel *titleModel;
@property (copy, nonatomic) NSString *author;
@property (nonatomic) int subType;
@property (copy, nonatomic) NSArray *fromUserModelArray;
@property (retain, nonatomic) AWECodeGenUrlModel *imageUrlModel;
@property (retain, nonatomic) AWECodeGenUrlModel *avatarUrlModel;
@property (retain, nonatomic) AWECodeGenUrlModel *typeUrlModel;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) int labelType;
@property (nonatomic) int avatarType;
@property (retain, nonatomic) AWECodeGenAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *avatarSchema;
@property (copy, nonatomic) NSString *cellSchema;
@property (copy, nonatomic) NSString *coverSchema;
@property (copy, nonatomic) NSString *normalMobParams;
@property (nonatomic) long long noticeDisableType;
@property (copy, nonatomic) NSString *noticeDisableText;
@property (retain, nonatomic) AWECodeGenNoticeButtonModel *buttonModel;
@property (copy, nonatomic) NSString *dynamicSchema;
@property (copy, nonatomic) NSString *uniqType;
@property (nonatomic) int coverType;
@property (copy, nonatomic) NSArray *labelListModelArray;
@property (nonatomic) int isDeleted;
@property (nonatomic) int contentOffset;
@property (copy, nonatomic) NSDictionary *optionInfo;
@property (retain, nonatomic) AWECodeGenInteractiveNoticeActionModel *actionInfoModel;
@property (retain, nonatomic) AWECodeGenCommentNoticeModel *commentModel;
@property (retain, nonatomic) AWECodeGenDanmakuInfoModel *danmakuInfoModel;
@property (nonatomic) long long liteInteraction;
@property (copy, nonatomic) NSDictionary *thanksDiggInfo;
@property (retain, nonatomic) AWECodeGenLiteInteractionInfoModel *liteInteractionInfoModel;
@property (copy, nonatomic) NSDictionary *hotsoonFlame;
@property (copy, nonatomic) NSString *supplement;
@property (copy, nonatomic) NSDictionary *douyinUgcWendaAnswerInfo;
@property (copy, nonatomic) NSArray *contentTextFormatsModelArray;
@property (retain, nonatomic) AWECodeGenContentResourceModel *contentResourceModel;
@property (copy, nonatomic) NSArray *actionBarsModelArray;
@property (retain, nonatomic) AWECodeGenImageUrlsModel *imageUrlsStructModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWECodeGenGeneralNoticeButtonModel *generalButtonModel;
@property (nonatomic) BOOL showArrow;
@property (retain, nonatomic) AWECodeGenSubContentModel *subContentModel;
@property (copy, nonatomic) NSString *subContentSchema;
@property (retain, nonatomic) AWECodeGenAdditionalInfoModel *additionalInfoModel;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
