@class NSArray, NSAttributedString;

@interface AWEFriendStyleLikeUserCellFrame : AWEFriendStyleCommentBaseCellFrame

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avatar1Frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avatar2Frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avatar3Frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } labelFrame;
@property (retain, nonatomic) NSAttributedString *likeUserAttributedString;
@property (retain, nonatomic) NSArray *linkRangeArray;
@property (retain, nonatomic) NSAttributedString *moreText;

- (void)calculateLayoutWithContainerWidth:(double)a0;
- (long long)diggIntegerCount;
- (id)likeNumString;
- (id)handleUserNameWithString:(id)a0 userModel:(id)a1 isFirstUser:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (double)cellHeight;

@end
