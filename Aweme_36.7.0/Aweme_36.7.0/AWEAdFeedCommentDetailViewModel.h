@class AWECommentModel, NSString, AWEAdFeedCommentDetailModel, NSAttributedString;

@interface AWEAdFeedCommentDetailViewModel : NSObject

@property (nonatomic) unsigned long long commentType;
@property (retain, nonatomic) AWECommentModel *topComment;
@property (retain, nonatomic) AWEAdFeedCommentDetailModel *normalComment;
@property (retain, nonatomic) NSAttributedString *normalCommentContentAttrText;
@property (retain, nonatomic) NSAttributedString *normalCommentContentTruncationToken;
@property (retain, nonatomic) NSAttributedString *normalCommentDescAttrText;
@property (retain, nonatomic) NSAttributedString *topCommentContentAttrText;
@property (nonatomic) double normalCommentContentHeight;
@property (nonatomic) double normalCommentDescHeight;
@property (nonatomic) double topCommentContentHeight;
@property (nonatomic) double cellHeight;
@property (nonatomic) BOOL normalCommentContentExpand;
@property (nonatomic) BOOL appendCommentContentExpand;
@property (retain, nonatomic) NSAttributedString *appendCommentContentAttrText;
@property (nonatomic) double appendCommentContentHeight;
@property (nonatomic) BOOL needReply;
@property (copy, nonatomic) id /* block */ cellLayoutUpdate;
@property (copy, nonatomic) id /* block */ likeTapedBlock;
@property (nonatomic) unsigned long long LlmHighlightCheckStatus;
@property (nonatomic) BOOL hasTrackedHighlight;
@property (copy, nonatomic) NSString *llmHighlightText;
@property (copy, nonatomic) id /* block */ imageClickBlock;

+ (void)appendAdLinkIconToAttributedString:(id)a0 linkIcons:(id)a1;
+ (double)imageWidth;

- (id)initWithDetailModel:(id)a0;
- (void)packUpNormalCommentContent;
- (void)expandNormalCommentContent;
- (id)formateTimestamp:(double)a0;
- (id)initWithTopModel:(id)a0;
- (void)calculateNormalCommentDescHeight;
- (void)calculateNormalCommentContentHeightWithExpand:(BOOL)a0;
- (double)imagelistAndAppendViewHeight;
- (void)calculateTopCommentContentHeight;
- (BOOL)shouldShowImagesList;
- (BOOL)shouldShowAppendComment;
- (void)calculateAppendCommentContentHeightd:(BOOL)a0;
- (void)packUpAppendCommentContent;
- (id)appendAttriStringWithFont:(id)a0 tapAction:(id /* block */)a1;
- (void)makeHighlightWith:(id)a0;
- (void)expandAppendCommentContent;
- (id)topCommentUserName;
- (id)topCommentAvatarURLList;
- (void)detectHighlightTextRange:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)calculateLayout;

@end
