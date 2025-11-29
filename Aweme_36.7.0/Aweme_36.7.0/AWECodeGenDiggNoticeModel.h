@class AWECodeGenCommentModel, NSString, NSArray, AWECodeGenContentWithIconModel, AWECodeGenVsNoticeDetailModel, AWECodeGenDanmakuInfoModel, AWECodeGenAwemeModel, AWECodeGenNoticeInspireInfoModel, AWECodeGenLiteCommentInspireStrcutModel, AWECodeGenIMDataSourceModel, AWECodeGenRelationDynamicLableModel, AWECodeGenUrlModel;

@interface AWECodeGenDiggNoticeModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenAwemeModel *awemeModel;
@property (copy, nonatomic) NSArray *fromUserModelArray;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) int mergeCount;
@property (nonatomic) long long diggType;
@property (nonatomic) long long cid;
@property (copy, nonatomic) NSString *realCid;
@property (copy, nonatomic) NSString *forwardId;
@property (retain, nonatomic) AWECodeGenRelationDynamicLableModel *relationLabelModel;
@property (retain, nonatomic) AWECodeGenCommentModel *commentModel;
@property (nonatomic) BOOL hasDiggList;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) int commentUnvisible;
@property (retain, nonatomic) AWECodeGenContentWithIconModel *contentIconModel;
@property (nonatomic) int labelType;
@property (copy, nonatomic) NSString *labelTracking;
@property (retain, nonatomic) AWECodeGenUrlModel *coverModel;
@property (retain, nonatomic) AWECodeGenUrlModel *coverOriginModel;
@property (copy, nonatomic) NSArray *labelListModelArray;
@property (retain, nonatomic) AWECodeGenVsNoticeDetailModel *vsNoticeDetailModel;
@property (retain, nonatomic) AWECodeGenDanmakuInfoModel *danmakuInfoModel;
@property (retain, nonatomic) AWECodeGenIMDataSourceModel *imSourceModel;
@property (nonatomic) long long interestGroupId;
@property (copy, nonatomic) NSArray *awemeListModelArray;
@property (retain, nonatomic) AWECodeGenLiteCommentInspireStrcutModel *liteCommentInspireInfoModel;
@property (copy, nonatomic) NSString *cfNotexText;
@property (retain, nonatomic) AWECodeGenNoticeInspireInfoModel *inspireInfoModel;
@property (copy, nonatomic) NSString *supplement;
@property (copy, nonatomic) NSArray *actionBarsModelArray;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int aiCloneCmt;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
