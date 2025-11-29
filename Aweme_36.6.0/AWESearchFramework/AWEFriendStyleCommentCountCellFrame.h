@class NSString;

@interface AWEFriendStyleCommentCountCellFrame : AWEFriendStyleCommentBaseCellFrame

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } labelFrame;
@property (retain, nonatomic) NSString *contentString;
@property (nonatomic) BOOL shouldShowMoreCommentEntrance;

- (void)calculateLayoutWithContainerWidth:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (double)cellHeight;

@end
