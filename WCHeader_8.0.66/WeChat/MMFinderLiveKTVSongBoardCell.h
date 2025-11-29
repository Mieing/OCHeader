@class MMUILabel, UIView;

@interface MMFinderLiveKTVSongBoardCell : UICollectionViewCell

@property (retain, nonatomic) MMUILabel *boardLabel;
@property (retain, nonatomic) MMUILabel *subBoardLabel;
@property (nonatomic) unsigned int boardType;
@property (retain, nonatomic) UIView *tabIndicatorView;
@property (nonatomic) BOOL canShowtabIndicatorView;

+ (id)cellIdentifier;
+ (struct CGSize { double x0; double x1; })cellSizeWithLabel:(id)a0 boardType:(unsigned int)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithBoardName:(id)a0 boardType:(unsigned int)a1 isChosen:(BOOL)a2;
- (void).cxx_destruct;

@end
