@class AWECommentTemplateCellModel, NSString, AWEAdEvaluateDataController, NSURL, NSAttributedString, AWEAdEvaluateDetailModel;

@interface AWEAdEvaluateDetailViewModel : NSObject

@property (retain, nonatomic) AWEAdEvaluateDetailModel *normalComment;
@property (copy, nonatomic) NSAttributedString *normalCommentContentAttrText;
@property (copy, nonatomic) NSString *shrinkedCommetString;
@property (copy, nonatomic) NSAttributedString *rateCommentContentAttrText;
@property (copy, nonatomic) NSAttributedString *replayCommentContentAttrText;
@property (retain, nonatomic) NSURL *replayTitleAvatarURL;
@property (copy, nonatomic) NSString *replyTitleName;
@property (nonatomic) double normalCommentContentHeight;
@property (nonatomic) double replyCommentContentHeight;
@property (nonatomic) double cellHeight;
@property (nonatomic) BOOL normalCommentContentExpand;
@property (nonatomic) BOOL isDigged;
@property (nonatomic) BOOL hasReply;
@property (nonatomic) BOOL hasImgList;
@property (nonatomic) long long DiggedCount;
@property (retain, nonatomic) AWEAdEvaluateDetailModel *replyComment;
@property (retain, nonatomic) AWECommentTemplateCellModel *templateModel;
@property (copy, nonatomic) id /* block */ cellLayoutUpdate;
@property (weak, nonatomic) AWEAdEvaluateDataController *dataController;

- (id)initWithDetailModel:(id)a0;
- (void)preCalculateCommentRow;
- (double)calculateNormalCommentContentHeightWithExpand;
- (double)getImageCollectionViewCellHeight;
- (double)calculateReplyCommentContentHeight;
- (long long)takeImgCount;
- (id)getContentString;
- (id)getCommentContentAttrText;
- (void)packUpNormalCommentContent;
- (id)generateContentAttrWithExpand;
- (BOOL)shouldShowTag;
- (double)takeRateScore;
- (long long)takeDiggedCount;
- (BOOL)shouldReply;
- (void)expandNormalCommentContent;
- (BOOL)shouldImgShow;
- (BOOL)shouldExpand;
- (BOOL)shouldDigged;
- (void)updateDiggWithType:(id)a0;
- (id)formateTimestamp:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)calculateLayout;

@end
