@class WCTimeLineAdLookbookCardMediaView, UIImageView, WCAdLookbookCardItem, MMUIView, MMUIButton, MMUILabel;
@protocol WCTimeLineAdLookbookCardCellViewDelegate;

@interface WCTimeLineAdLookbookCardCellView : UICollectionViewCell

@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) WCAdLookbookCardItem *cardItem;
@property (weak, nonatomic) id<WCTimeLineAdLookbookCardCellViewDelegate> delegate;
@property (retain, nonatomic) MMUILabel *title;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MMUIButton *coverButton;
@property (retain, nonatomic) MMUIView *mediaHolderView;
@property (retain, nonatomic) WCTimeLineAdLookbookCardMediaView *mediaView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateItemWithIndex:(unsigned long long)a0 cardItem:(id)a1 delegate:(id)a2;
- (void)layoutSubviews;
- (void)layoutTitleArea;
- (struct CGSize { double x0; double x1; })mediaSize;
- (void)onCoverButtonClicked:(id)a0;
- (void)setVideoWithPlayState:(BOOL)a0;
- (void)updateVideoPauseIconState:(BOOL)a0;
- (void)setVideoControlViewHidden:(BOOL)a0;
- (void)setVideoToStandby:(BOOL)a0;
- (BOOL)shouldHideItemTitle;
- (void).cxx_destruct;

@end
