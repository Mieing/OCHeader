@class FinderLiveSquareStyleInfo;

@interface WCFinderLiveFeedBaseStyleableCell : UICollectionViewCell

@property (retain, nonatomic) FinderLiveSquareStyleInfo *styleInfo;

+ (double)cellHeightInWidth:(double)a0 styleInfo:(id)a1;

- (void)initializeIfNeeded:(id)a0;
- (BOOL)enableBottomExtraInfo;
- (void)willDisplay;
- (void)didEndDisplay;
- (void)initViewsIfNeeded;
- (void)updateStyle;
- (void).cxx_destruct;

@end
