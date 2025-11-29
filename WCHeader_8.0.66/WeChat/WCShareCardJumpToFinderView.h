@class WCShareCardJumpToFinderViewData, MMWebImageView, MMUIButton, MMUILabel;
@protocol WCShareCardJumpToFinderButtonDelegate;

@interface WCShareCardJumpToFinderView : UIView

@property (retain, nonatomic) WCShareCardJumpToFinderViewData *data;
@property (weak, nonatomic) id<WCShareCardJumpToFinderButtonDelegate> delegate;
@property (retain, nonatomic) MMUIButton *jumpButton;
@property (retain, nonatomic) MMWebImageView *leftIconImageView;
@property (retain, nonatomic) MMWebImageView *rightIconImageView;
@property (retain, nonatomic) MMUILabel *buttonLabel;

- (id)initViewWithCardInfo:(id)a0 delegate:(id)a1;
- (double)getWidth;
- (void)updateView;
- (void)updateJumpToFinderView;
- (void)adjustView;
- (void)updateContentButton;
- (void)setAccessibilityLabelToView:(id)a0 fieldItem:(id)a1;
- (BOOL)hasLeftIconView;
- (BOOL)hasRightIconView;
- (void)onContentButtonClick;
- (void).cxx_destruct;

@end
