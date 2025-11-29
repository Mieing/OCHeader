@class AWECommentModel, NSArray, YYTextLayout, AWEFriendStyleCommentRelationModel, NSAttributedString;

@interface AWEFriendStyleCommentCellFrame : AWEFriendStyleCommentBaseCellFrame

@property (retain, nonatomic) AWECommentModel *commentModel;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } relationRange;
@property (nonatomic) BOOL shouldUseTowLabels;
@property (retain, nonatomic) YYTextLayout *contentLabelLayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } authorLabelFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentLabelFrame;
@property (retain, nonatomic) NSArray *linkRangeArray;
@property (retain, nonatomic) NSAttributedString *authorString;
@property (retain, nonatomic) NSAttributedString *contentStrings;
@property (retain, nonatomic) NSAttributedString *authorMoreText;
@property (retain, nonatomic) AWEFriendStyleCommentRelationModel *relationModel;

- (id)authorTagTextColor;
- (void)replaceGifTagIfNeeded;
- (id)authorRelationString:(id)a0;
- (id)authorRelationTailString:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })relationRangeForName:(id)a0 relationString:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })relationRangeInTail:(id)a0 relationString:(id)a1;
- (id)relationFont;
- (id)normalTagTextColor;
- (void)setAttributedString:(id)a0 textBorder:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setAttributedString:(id)a0 attributes:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)replaceImageTagIfNeeded;
- (BOOL)needReplaceRelationTagIfNeed;
- (void)configWithCommentModel:(id)a0 index:(long long)a1 totalCount:(long long)a2;
- (void)replaceRelationTagIfNeed:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)cellHeight;

@end
