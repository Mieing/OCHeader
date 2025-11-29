@class WCDataItem, MMUIImageView, WCAdHotDiscussedBarInfo, MMUIView, MMUIButton, MMUILabel;

@interface WCAdHotDiscussedBarView : WCAdBaseBarView

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCAdHotDiscussedBarInfo *barInfo;
@property (nonatomic) unsigned long long itemScene;
@property (retain, nonatomic) MMUILabel *labelTextView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIView *headImagesContainer;
@property (retain, nonatomic) MMUIImageView *rightArrow;
@property (retain, nonatomic) MMUILabel *discussedNumberLabel;
@property (retain, nonatomic) MMUIButton *clickActionButton;

+ (double)topMargin:(id)a0 maxWidth:(double)a1;
+ (double)bottomMargin;
+ (double)viewHeight:(id)a0 maxWidth:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 contentItemScene:(unsigned long long)a2;
- (void)initSubviews;
- (void)adjustSubviews;
- (void)onActionButtonClicked;
- (void)genHeadImagesContainer;
- (long long)maxHeadImageNumber;
- (id)genRoundHeadImageViewWithIndex:(long long)a0;
- (double)headImagesContainerMaxWidth;
- (double)maxTitleWidth;
- (double)maxLabelTextWidth;
- (void)updateDataItem:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
