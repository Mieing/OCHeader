@class AWEHotSearchCommentAuthorInfoModel, AWECommentModel, AWEHotSearchCommentActionBarModel, AWECommonFeedSectionContext, AWEHotSearchCommentContentInfoModel, NSString;

@interface AWEHotSearchCommentSectionCellModel : NSObject <AWECommonFeedCellModelProtocol>

@property (nonatomic) BOOL isSubComment;
@property (nonatomic) BOOL isInserted;
@property (retain, nonatomic) AWEHotSearchCommentAuthorInfoModel *authorInfoModel;
@property (retain, nonatomic) AWEHotSearchCommentContentInfoModel *contentInfoModel;
@property (retain, nonatomic) AWEHotSearchCommentActionBarModel *actionBarModel;
@property (retain, nonatomic) AWECommentModel *commentModel;
@property (nonatomic) double containerWidth;
@property (nonatomic) BOOL shouldShowFoldButton;
@property (weak, nonatomic) AWECommonFeedSectionContext *commonFeedSectionContext;
@property (nonatomic) BOOL hasTracked;
@property (copy, nonatomic) id /* block */ trackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })cellSizeWithConstraintWidth:(double)a0;
- (void)configWithSectionData:(id)a0;
- (id)p_attributedContentForComment:(id)a0;
- (id)p_buildContentInfoModel;
- (id)p_buildAuthorInfoModelWithAuthorIdentity:(id)a0;
- (id)p_buildActionBarModelWithNeedAnimate:(BOOL)a0;
- (void)p_textFoldButtonWithAttributedString:(id)a0;
- (id)p_getFullTextBtnAttrString:(id)a0;
- (id)p_commentImageURLModel:(id)a0;
- (struct CGSize { double x0; double x1; })p_commentImageAdjustSizeWithRawSize:(struct CGSize { double x0; double x1; })a0;
- (void)configWithCommentModel:(id)a0 isSubComment:(BOOL)a1 isInserted:(BOOL)a2 authorIdentity:(id)a3;
- (void)resetActionBar;
- (void).cxx_destruct;

@end
