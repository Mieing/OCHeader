@class UIImageView, MMUILabel, MMFinderLiveChooseClarityDataItem;

@interface MMFinderLiveClarityHeaderButton : UIView

@property (retain, nonatomic) MMUILabel *clarityLabel;
@property (retain, nonatomic) UIImageView *arrowImgView;
@property (retain, nonatomic) MMFinderLiveChooseClarityDataItem *clarityDataItem;
@property (copy, nonatomic) id /* block */ selfSizeChangeCallback;
@property (copy, nonatomic) id /* block */ onTapCallback;

- (id)init;
- (void)updateBorderLayer;
- (void)addTapGesture;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutClarityLabel;
- (void)layoutArrowImgView;
- (struct CGSize { double x0; double x1; })getSelfSize;
- (void)updateClarityDataItem:(id)a0;
- (BOOL)isClarityDataItemValid;
- (void)handleClarityTapGesture:(id)a0;
- (void).cxx_destruct;

@end
