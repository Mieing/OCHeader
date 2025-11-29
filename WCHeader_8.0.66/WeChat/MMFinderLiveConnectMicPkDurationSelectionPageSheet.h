@class NSArray, MMFinderLiveBattleDurationItem, MMCommonPickerView, UIView, NSString;
@protocol MMFinderLiveConnectMicPkDurationSelectionPageSheetDelegate;

@interface MMFinderLiveConnectMicPkDurationSelectionPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, MMCommonPickerDelegate>

@property (retain, nonatomic) NSArray *options;
@property (retain, nonatomic) MMFinderLiveBattleDurationItem *selectedOption;
@property (retain, nonatomic) UIView *separatorBar;
@property (retain, nonatomic) MMCommonPickerView *picker;
@property (weak, nonatomic) id<MMFinderLiveConnectMicPkDurationSelectionPageSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDurationOptions:(id)a0 selectedOption:(id)a1;
- (void)layoutSubviews;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onPickerViewDidSelectRow:(long long)a0 inComponent:(long long)a1 PickItem:(id)a2;
- (void)initializeComponents;
- (void).cxx_destruct;

@end
