@class UILabel, UIImageView, NSString;

@interface DeepCleanProgressDoneHalfScreenView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (nonatomic) unsigned long long dataSize;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIImageView *finishIconView;
@property (copy, nonatomic) NSString *finishTitle;
@property (copy, nonatomic) NSString *finishTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSize:(unsigned long long)a0 finishTitle:(id)a1 finishTip:(id)a2;
- (void)updateView;
- (void)setupDetailView;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
- (void).cxx_destruct;

@end
