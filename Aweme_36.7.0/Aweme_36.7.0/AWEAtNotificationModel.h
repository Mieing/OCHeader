@class AWEAwemeModel, NSString, NSArray, AWECommentAudioModel, AWEUserModel, AWEURLModel, AWEVSNoticeDetailModel, AWECommentModel, AWERelationDynamicLable, NSMutableAttributedString, AWEIMStickerModel;

@interface AWEAtNotificationModel : AWEBaseApiModel

@property (readonly, nonatomic) NSMutableAttributedString *displayContent;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *schemaURL;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEURLModel *imageURL;
@property (retain, nonatomic) AWEURLModel *maskImageURL;
@property (nonatomic) long long subType;
@property (retain, nonatomic) AWEUserModel *userInfo;
@property (retain, nonatomic) AWECommentModel *replyComment;
@property (retain, nonatomic) AWECommentModel *level1Comment;
@property (retain, nonatomic) AWERelationDynamicLable *relationLabel;
@property (nonatomic) long long commentStatus;
@property (nonatomic) long long itemStatus;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) long long labelType;
@property (nonatomic) long long interestGroupID;
@property (retain, nonatomic) NSArray *commentVideoReplyStruct;
@property (retain, nonatomic) AWEIMStickerModel *sticker;
@property (retain, nonatomic) NSArray *imageList;
@property (nonatomic) BOOL commentUnvisible;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *labelTrack;
@property (copy, nonatomic) NSArray *fansTagArray;
@property (retain, nonatomic) NSArray *propList;
@property (retain, nonatomic) AWECommentAudioModel *audioModel;
@property (copy, nonatomic) NSString *assemblyDeleteTipDesc;
@property (retain, nonatomic) NSString *descAndTime;
@property (retain, nonatomic) AWEVSNoticeDetailModel *vsNoticeDetail;

+ (id)userInfoJSONTransformer;
+ (id)imageListJSONTransformer;
+ (id)imageURLJSONTransformer;
+ (id)awemeJSONTransformer;
+ (id)relationLabelJSONTransformer;
+ (id)commentVideoReplyStructJSONTransformer;
+ (id)audioModelJSONTransformer;
+ (id)fansTagArrayJSONTransformer;
+ (id)stickerJSONTransformer;
+ (id)replyCommentJSONTransformer;
+ (long long)messageStatusForModel:(id)a0;
+ (BOOL)shouldShowContent:(id)a0;
+ (id)vsNoticeDetailJSONTransformer;
+ (id)maskImageURLJSONTransformer;
+ (id)level1CommentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)shouldShowComment;
- (id)accessibilityContent;
- (BOOL)shouldShowCover;
- (id)trackPropList;
- (id)targetCommentID;
- (BOOL)shouldEnterDetailPage;
- (BOOL)shouldEnterMentionFeed;
- (void).cxx_destruct;
- (id)init;

@end
