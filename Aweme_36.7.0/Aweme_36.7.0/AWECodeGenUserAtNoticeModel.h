@class AWECodeGenCommentModel, NSString, AWECodeGenIMStickerModel, NSArray, AWECodeGenVsNoticeDetailModel, AWECodeGenUserModel, AWECodeGenAwemeModel, NSDictionary, AWECodeGenRelationDynamicLableModel, AWECodeGenUrlModel;

@interface AWECodeGenUserAtNoticeModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schemaUrl;
@property (retain, nonatomic) AWECodeGenUrlModel *imageUrlModel;
@property (nonatomic) long long subType;
@property (retain, nonatomic) AWECodeGenUserModel *userInfoModel;
@property (retain, nonatomic) AWECodeGenRelationDynamicLableModel *relationLabelModel;
@property (retain, nonatomic) AWECodeGenCommentModel *replyCommentModel;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *labelText;
@property (retain, nonatomic) AWECodeGenIMStickerModel *stickerModel;
@property (nonatomic) int commentStatus;
@property (nonatomic) int itemStatus;
@property (retain, nonatomic) AWECodeGenCommentModel *level1CommentModel;
@property (retain, nonatomic) AWECodeGenAwemeModel *awemeModel;
@property (nonatomic) int labelType;
@property (nonatomic) int commentUnvisible;
@property (copy, nonatomic) NSString *labelTracking;
@property (copy, nonatomic) NSArray *imageListModelArray;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSArray *labelListModelArray;
@property (retain, nonatomic) AWECodeGenVsNoticeDetailModel *vsNoticeDetailModel;
@property (retain, nonatomic) AWECodeGenUrlModel *maskImageUrlModel;
@property (copy, nonatomic) NSArray *effectIdArray;
@property (copy, nonatomic) NSArray *videoListModelArray;
@property (nonatomic) long long interestGroupId;
@property (copy, nonatomic) NSDictionary *commentAudio;
@property (nonatomic) BOOL showCommentInvisible;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
