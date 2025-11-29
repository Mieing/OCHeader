@class MMFinderLiveConnectedMicBaseCellHeaderView, NSString, MMFinderLiveConnectedMicCellHeaderViewAction, UILabel;

@interface MMFinderLiveConnectedMicCollectionCellHeaderView : UICollectionReusableView

@property (retain, nonatomic) MMFinderLiveConnectedMicBaseCellHeaderView *baseView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) MMFinderLiveConnectedMicCellHeaderViewAction *action;
@property (nonatomic) BOOL showSeparatorBar;

+ (id)ReuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateWithTitle:(id)a0;
- (void)setCorner:(BOOL)a0;
- (void)hideBackground;
- (void).cxx_destruct;

@end
