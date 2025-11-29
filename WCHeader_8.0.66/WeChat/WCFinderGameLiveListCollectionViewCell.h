@class WCFinderGameLiveListContentView;

@interface WCFinderGameLiveListCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) WCFinderGameLiveListContentView *liveListContentView;

+ (id)cellIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)updateWithGameInfo:(id)a0 isSelect:(BOOL)a1;
- (void)drawSeparator;
- (void)removeSeparator;
- (void)toggle;
- (void)unToggle;
- (void)updateWithGameInfo:(id)a0 searchText:(id)a1;
- (void)updateCellWithRectCorner:(unsigned long long)a0;
- (void).cxx_destruct;

@end
