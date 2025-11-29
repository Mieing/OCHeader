@class NSString, AWEAwemeModel, AWEBarrageModel, NSAttributedString, AWECommentAnchorModel;

@interface AWEAwemeBarrageFrame : NSObject <AWEAwemeBarrageFrameProtocol>

@property (nonatomic) double containerWidth;
@property (nonatomic) double awemeAndCommentContentMaxWidth;
@property (nonatomic) BOOL awemeAndCommentHasDislikeBtn;
@property (retain, nonatomic) AWEBarrageModel *model;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avatarImageViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } backgroundViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } barrageViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } authorLabelFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentLabelFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dislikeBtnFrame;
@property (retain, nonatomic) NSAttributedString *authorLabelAttrbutedString;
@property (retain, nonatomic) NSAttributedString *contentLabelAttrbutedString;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } iconImageViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } musicInfoViewFrame;
@property (retain, nonatomic) NSString *musicLabelString;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } anchorViewFrame;
@property (retain, nonatomic) AWECommentAnchorModel *anchorModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } relationViewFrame;
@property (retain, nonatomic) id relationModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dislikeLabelFrame;
@property (retain, nonatomic) NSAttributedString *dislikeAttrbutedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultAvatarImage;
+ (double)barrageMoveLength:(BOOL)a0;
+ (double)barrageMoveTime:(BOOL)a0;

- (double)authorLabelHeight;
- (id)avatarURLModel;
- (double)containerMaxWidth;
- (void)configAwemeBarrageAuthorAttr;
- (id)getAnchorModel;
- (void)configCommentBarrageAuthorAttr;
- (void)calculateAwemeAndCommentContentLabel;
- (struct CGSize { double x0; double x1; })calculateAwemeAndCommentAnchorViewFrameWithSize:(struct CGSize { double x0; double x1; })a0 contentMaxWidth:(double)a1;
- (id)awemeAndCommentParagraphStyle;
- (id)awemeAndCommentAuthorLabelParameter;
- (id)constructString:(id)a0 maxWidth:(double)a1 labelParameter:(id)a2;
- (id)replyUserName:(id)a0;
- (id)configAwemeBarrageContent:(id)a0 contentMaxWidth:(double)a1;
- (id)awemeAndCommentContentLabelParameter;
- (void)insertCorrelationItemTagIfNeededWithAttributedString:(id)a0 awemeModel:(id)a1;
- (id)configAwemeBarrageContentTag;
- (id)configAwemeBarrageContentStr:(id)a0;
- (id)configImageCommentPublishedAwemeBarrageContentStr:(id)a0 contentTag:(id)a1;
- (id)p_concatContent:(id)a0;
- (void)insertImageCommentPublishPerfixIfNeededWithAttributedString:(id)a0 contentLabelParameter:(id)a1 model:(id)a2;
- (double)calculateCoinAndGoldLikeAuthorLabelWithUserName:(id)a0 contentMaxWidth:(double)a1;
- (void)calculateCoinAndGoldLikeContentLabelWithContentStr:(id)a0 contentMaxWidth:(double)a1;
- (struct CGSize { double x0; double x1; })calculateCoinAndGoldLikeAnchorViewFrameWithSize:(struct CGSize { double x0; double x1; })a0 contentMaxWidth:(double)a1;
- (id)coinAndGoldLikeParagraphStyle;
- (void)calculateAwemeAndComment;
- (void)calculateDiggAndViewer;
- (void)calculateCoinAndGoldLike;
- (id)constructString:(id)a0 maxWidthList:(id)a1 labelParameter:(id)a2;
- (void)calculateWithModel:(id)a0 containerWidth:(double)a1 awemeModel:(id)a2;
- (void).cxx_destruct;

@end
