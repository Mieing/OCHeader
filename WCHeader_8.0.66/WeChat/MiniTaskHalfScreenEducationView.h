@class NSString, MMUILabel, UIView;

@interface MiniTaskHalfScreenEducationView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUILabel *textLabel;
@property (retain, nonatomic) MMUILabel *descContentLable;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfirmBlcok:(id /* block */)a0;
- (void)initSubviews;
- (void)initTextLabel;
- (void)initDescContentView;
- (void)layoutSubviews;
- (long long)styleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (double)pageSheetContentWidth;
- (double)bottomViewBottomMargin;
- (void).cxx_destruct;

@end
