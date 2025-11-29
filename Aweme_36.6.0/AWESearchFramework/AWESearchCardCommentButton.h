@class AWESearchCardCommentModel;

@interface AWESearchCardCommentButton : AWESearchCardInteractorButton

@property (retain, nonatomic) AWESearchCardCommentModel *model;

+ (id)emptyDescWhenNumZero;

- (void)updateCommentCount;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
