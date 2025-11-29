@class UIView, IESGCPImageButton, IESGCPPBVideoRankListEntrance;

@interface IESGCPDetailContentRankEntranceView : UIControl

@property (retain, nonatomic) IESGCPPBVideoRankListEntrance *rankEntranceModel;
@property (retain, nonatomic) UIView *separatorLineView;
@property (retain, nonatomic) IESGCPImageButton *rankTitleView;
@property (retain, nonatomic) IESGCPImageButton *rankSubTitleView;

- (void)didClickContentRankEntrance;
- (void)updateWithVideoRankModel:(id)a0;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
