@interface AWEFriendStyleAddCommentCellFrame : AWEFriendStyleCommentBaseCellFrame

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } iconFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } labelFrame;

- (void)calculateLayoutWithContainerWidth:(double)a0;
- (BOOL)canShowCommentInputView;
- (id)init;
- (double)cellHeight;

@end
