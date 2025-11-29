@class NSString, NSArray, MMLivePivotSkeletonComponentView, UIView;

@interface MMLivePivotSkeletonView : UICollectionReusableView

@property (class, readonly, nonatomic) NSString *reuseId;

@property (retain, nonatomic) UIView *headerLine;
@property (retain, nonatomic) MMLivePivotSkeletonComponentView *avatar;
@property (retain, nonatomic) MMLivePivotSkeletonComponentView *nickname;
@property (retain, nonatomic) NSArray *navigationButtons;
@property (retain, nonatomic) MMLivePivotSkeletonComponentView *onlineUsers;
@property (retain, nonatomic) NSArray *bullets;
@property (retain, nonatomic) UIView *commentLine;
@property (retain, nonatomic) NSArray *commentItems;
@property (retain, nonatomic) UIView *operationsLine;
@property (retain, nonatomic) MMLivePivotSkeletonComponentView *commentBox;
@property (retain, nonatomic) NSArray *operationButtons;
@property (nonatomic) BOOL animate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutHeaderLineComponents;
- (void)layoutOperationsLineComponents;
- (void)layoutCommentLineComponents;
- (void).cxx_destruct;

@end
