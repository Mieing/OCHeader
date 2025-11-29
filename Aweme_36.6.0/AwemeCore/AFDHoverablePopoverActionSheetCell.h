@class AFDHoverableActionModel, AFDHoverableButton, NSString, UIView;
@protocol AFDHoverablePopoverActionSheetCellDelegate;

@interface AFDHoverablePopoverActionSheetCell : UITableViewCell <AFDHoverable>

@property (retain, nonatomic) AFDHoverableButton *hoverableButton;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *highlightMaskView;
@property (retain, nonatomic) AFDHoverableActionModel *actionModel;
@property (weak, nonatomic) id<AFDHoverablePopoverActionSheetCellDelegate> delegate;
@property (readonly, nonatomic) long long afdHoverStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hoverableButtonClick:(id)a0;
- (void)updateTitleAndImageWithActionModel:(id)a0;
- (void)updateHighlightedColor:(id)a0;
- (void)updateAnimationFinishBlock:(id)a0;
- (void)beginImageViewAnimation;
- (void)hoverBegan:(id)a0;
- (void)hoverEnded:(id)a0;
- (void)hoverCancelled:(id)a0;
- (void)updateWithHoverActionModel:(id)a0;
- (void)showLineView;
- (void)hideLineView;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
