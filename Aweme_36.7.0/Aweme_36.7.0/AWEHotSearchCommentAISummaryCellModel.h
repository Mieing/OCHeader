@class AWECommentModel, NSArray, YYTextLayout, NSString, NSAttributedString;

@interface AWEHotSearchCommentAISummaryCellModel : NSObject <AWECommonFeedCellModelProtocol>

@property (retain, nonatomic) AWECommentModel *commentModel;
@property (copy, nonatomic) NSArray *avatarImageURLList;
@property (retain, nonatomic) NSAttributedString *contentText;
@property (retain, nonatomic) YYTextLayout *contentLayout;
@property (nonatomic) double containerWidth;
@property (nonatomic) BOOL needQuoteView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })cellSizeWithConstraintWidth:(double)a0;
- (void)configWithSectionData:(id)a0;
- (id)p_attributedContentForComment:(id)a0;
- (double)p_fontSize;
- (id)p_labelFont;
- (id)p_labelColor;
- (id)p_labelHighlightColor;
- (void)p_buildContentInfo;
- (void)configWithCommentModel:(id)a0;
- (void).cxx_destruct;

@end
