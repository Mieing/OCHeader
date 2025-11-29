@class UIButton, UIImageView, PAGView, MMUIButton, MMUILabel;

@interface MMFinderLiveAnchorRecordShowView : MMUIView

@property (nonatomic) long long pauseStatus;
@property (retain, nonatomic) UIImageView *headImageView;
@property (retain, nonatomic) PAGView *headPagView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *detailButton;
@property (retain, nonatomic) UIButton *actionButton;
@property (nonatomic) BOOL isCaptured;
@property (nonatomic) BOOL hasFirstUpdate;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL hideOpenGame;

- (double)getShowViewHeightWithPauseStatus:(BOOL)a0;
- (void)updateWithLivePauseStatus:(BOOL)a0 hideOpenGame:(BOOL)a1;
- (void)updateHeaImageViewWithLivePauseStatus:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)detailClick;
- (void)actionClick;
- (void)createUI;
- (void)layoutUI;
- (id)getAttributedString;
- (void).cxx_destruct;

@end
