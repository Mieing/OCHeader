@class AWESearchCardShareModel;

@interface AWESearchCardShareButton : AWESearchCardInteractorButton

@property (retain, nonatomic) AWESearchCardShareModel *model;

+ (id)emptyDescWhenNumZero;

- (void)updateShareCount;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
