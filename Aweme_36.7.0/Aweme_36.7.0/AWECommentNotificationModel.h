@class AWEAwemeModel, NSString, NSArray, AWEInteractModularizationTextModel, AWEUserModel, AWEVSNoticeDetailModel, AWECommentModel, AWERelationDynamicLable;

@interface AWECommentNotificationModel : AWEBaseApiModel

@property (retain, nonatomic) AWECommentModel *comment;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWEInteractModularizationTextModel *messageHint;
@property (nonatomic) long long noticeType;
@property (retain, nonatomic) AWECommentModel *replyComment;
@property (retain, nonatomic) AWECommentModel *level1Comment;
@property (retain, nonatomic) AWERelationDynamicLable *relationLabel;
@property (copy, nonatomic) NSString *forWardID;
@property (copy, nonatomic) NSString *parentID;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) long long labelType;
@property (nonatomic) long long interestGroupID;
@property (nonatomic) BOOL commentUnvisible;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *labelTrack;
@property (nonatomic) BOOL isFromOwnPostedRequest;
@property (copy, nonatomic) NSArray *fromUser;
@property (retain, nonatomic) AWEUserModel *relatedUser;
@property (nonatomic) long long mergeCount;
@property (copy, nonatomic) NSString *assemblyDeleteTipDesc;
@property (copy, nonatomic) NSArray *fansTagArray;
@property (copy, nonatomic) NSString *cooperationInfo;
@property (retain, nonatomic) NSString *descAndTime;
@property (retain, nonatomic) AWEVSNoticeDetailModel *vsNoticeDetail;
@property (copy, nonatomic) NSString *supplement;
@property (nonatomic) BOOL replyAICloneComment;
@property (retain, nonatomic) NSString *enterFrom;

+ (id)awemeJSONTransformer;
+ (id)relationLabelJSONTransformer;
+ (id)fansTagArrayJSONTransformer;
+ (id)commentJSONTransformer;
+ (id)replyCommentJSONTransformer;
+ (id)vsNoticeDetailJSONTransformer;
+ (id)level1CommentJSONTransformer;
+ (id)fromUserJSONTransformer;
+ (id)relatedUserJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)shouldShowComment;
- (BOOL)isCommentPolymericGroup;
- (BOOL)isCommentAIClonePolymeric;
- (BOOL)isCommentMultiItemPolymeric;
- (BOOL)isCommentPolymeric;
- (BOOL)shouldShowCover;
- (BOOL)shouldEnterDetailPage;
- (BOOL)isContainAweme;
- (BOOL)isHotspotCommentGroup;
- (void).cxx_destruct;

@end
