@class MJSpeedParameterPickerView, UISelectionFeedbackGenerator, NSDictionary, UIImage, MJSegmentSpeedInspectorViewModel, NSString;
@protocol MJSegmentSpeedInspectorViewDelegate;

@interface MJSegmentSpeedInspectorView : MJSegmentInspectorView <MJPrecisionPickerViewDataSource, MJPrecisionPickerViewDelegate>

@property (readonly, nonatomic) MJSpeedParameterPickerView *parameterPickerView;
@property (retain, nonatomic) UIImage *lowerIndicatorImage;
@property (retain, nonatomic) UIImage *higherIndicatorImage;
@property (retain, nonatomic) NSDictionary *pickerStrideLabelsByValue;
@property (retain, nonatomic) UISelectionFeedbackGenerator *feedback;
@property (readonly, nonatomic) MJSegmentSpeedInspectorViewModel *viewModel;
@property (weak, nonatomic) id<MJSegmentSpeedInspectorViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)bindViews;
- (id)precisionPickerView:(id)a0 contentForValue:(long long)a1;
- (id)precisionPickerView:(id)a0 labelForValue:(long long)a1;
- (id)precisionPickerView:(id)a0 contentsGravityForValue:(long long)a1;
- (void)precisionPickerView:(id)a0 didSelectValue:(long long)a1;
- (void)precisionPickerView:(id)a0 didScrollAcrossValue:(long long)a1;
- (BOOL)precisionPickerView:(id)a0 shouldAutoSnapForValue:(long long)a1;
- (void).cxx_destruct;

@end
