@class UILabel, NSString;
@protocol MMWebHalfScreenDelegate;

@interface MMWebTransNoticeHalfScreen : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) id<MMWebHalfScreenDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)titleForPageSheetConfirmButton;
- (id)init;
- (void)layoutSubviews;
- (void)onClickPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidDisappear;
- (void).cxx_destruct;

@end
