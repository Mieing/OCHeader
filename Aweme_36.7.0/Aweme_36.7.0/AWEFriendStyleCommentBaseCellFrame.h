@class AWEConcernCardModel;

@interface AWEFriendStyleCommentBaseCellFrame : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (weak, nonatomic) AWEConcernCardModel *cardModel;
@property (nonatomic) unsigned long long displayStyle;
@property (nonatomic) unsigned long long browsedType;
@property (nonatomic) double containerWidth;

- (void)calculateLayoutWithContainerWidth:(double)a0;
- (double)commentInnerLeftMargin;
- (double)commentInnerRightMargin;
- (id)tranferToRouterWithUserId:(id)a0;
- (void)configWithCardModel:(id)a0 containerWidth:(double)a1 displayStyle:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;
- (double)cellHeight;

@end
