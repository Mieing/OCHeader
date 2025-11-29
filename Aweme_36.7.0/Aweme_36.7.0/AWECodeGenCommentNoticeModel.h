@class AWECodeGenInteractiveTitleModel, NSString, NSArray, AWECodeGenVsNoticeDetailModel, AWECodeGenUserModel, AWECodeGenAwemeModel, AWECodeGenLiteCommentInspireStrcutModel, AWECodeGenRelationDynamicLableModel, AWECodeGenCommentModel;

@interface AWECodeGenCommentNoticeModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenCommentModel *commentModel;
@property (retain, nonatomic) AWECodeGenAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long commentType;
@property (copy, nonatomic) NSString *forwardId;
@property (retain, nonatomic) AWECodeGenRelationDynamicLableModel *relationLabelModel;
@property (retain, nonatomic) AWECodeGenCommentModel *replyCommentModel;
@property (retain, nonatomic) AWECodeGenCommentModel *level1CommentModel;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) int labelType;
@property (copy, nonatomic) NSString *parentId;
@property (nonatomic) int commentUnvisible;
@property (copy, nonatomic) NSString *labelTracking;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *labelListModelArray;
@property (copy, nonatomic) NSString *cooperationInfo;
@property (retain, nonatomic) AWECodeGenVsNoticeDetailModel *vsNoticeDetailModel;
@property (copy, nonatomic) NSArray *fromUserModelArray;
@property (nonatomic) int mergeCount;
@property (copy, nonatomic) NSString *hint;
@property (retain, nonatomic) AWECodeGenInteractiveTitleModel *hintWithParamsModel;
@property (nonatomic) long long interestGroupId;
@property (retain, nonatomic) AWECodeGenLiteCommentInspireStrcutModel *liteCommentInspireInfoModel;
@property (retain, nonatomic) AWECodeGenUserModel *relatedUserModel;
@property (copy, nonatomic) NSString *supplement;
@property (nonatomic) int replyAiCloneCmt;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL awemeInvisible;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
