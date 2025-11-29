@class ACCAIEmojiStylePickerView, NSString;
@protocol ACCRecordUIHiddenStrategyService, ACCRecorderViewContainer;

@interface ACCAIEmojiStyleSelectionComponent : ACCFeatureComponent <ACCAIEmojiStylePickerViewDelegate>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) ACCAIEmojiStylePickerView *pickerView;
@property (nonatomic) BOOL isFirstAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)imModel;
- (void)p_configPredicate;
- (void)AIEmojiStylePickerView:(id)a0 didSelectedStyle:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
