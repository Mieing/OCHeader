@class NSArray, NSString, UILabel, NSNumber, IESLiveImageTextView;

@interface IESLiveSelfDisciplineDurationSelectorView : UIView <IESLivePickerSheetViewDelegate>

@property (copy, nonatomic) id /* block */ didSelectGameDuration;
@property (retain, nonatomic) NSNumber *value;
@property (copy, nonatomic) NSArray *range;
@property (retain, nonatomic) UILabel *durationTitleLabel;
@property (retain, nonatomic) IESLiveImageTextView *durationTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPickerViewConfirm:(id)a0;
- (void)updateCurrentValue:(id)a0;
- (id)gameDurationStr:(long long)a0;
- (void)showTargetPoupItem;
- (id)initWithValue:(id)a0 range:(id)a1;
- (void).cxx_destruct;
- (void)setupViews;

@end
