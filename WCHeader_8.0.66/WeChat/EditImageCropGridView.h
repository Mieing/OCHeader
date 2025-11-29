@class NSArray;

@interface EditImageCropGridView : MMUIView

@property (nonatomic) BOOL enableShowGridCorners;
@property (retain, nonatomic) NSArray *horizontalGridLines;
@property (retain, nonatomic) NSArray *verticalGridLines;
@property (retain, nonatomic) NSArray *_borderGridLines;
@property (retain, nonatomic) NSArray *_tlLineView;
@property (retain, nonatomic) NSArray *_trLineView;
@property (retain, nonatomic) NSArray *_blLineView;
@property (retain, nonatomic) NSArray *_brLineView;

- (id)initWithCorners:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)didMoveToSuperview;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCenterGridHidden:(BOOL)a0;
- (void)layoutLines;
- (id)createLineView;
- (void).cxx_destruct;

@end
