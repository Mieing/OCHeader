@class UIImageView, UILabel, NSString;

@interface MMLiveCancelReplayConfirmPanel : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (copy, nonatomic) id /* block */ resultBlock;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResultBlock:(id /* block */)a0;
- (double)panelDetailViewMaxHeight;
- (void)configPageSheetAndDetailView;
- (void)layoutSubviews;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void).cxx_destruct;

@end
