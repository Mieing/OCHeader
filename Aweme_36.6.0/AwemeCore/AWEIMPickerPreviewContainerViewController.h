@class AWEIMPickerConfiguration, NSString, AWEIMPickerContext, AWEIMPickerPreviewViewController;

@interface AWEIMPickerPreviewContainerViewController : AWEIMComponentViewController <AWEIMComponentManagerDependency>

@property (retain, nonatomic) AWEIMPickerContext *componentContext;
@property (retain, nonatomic) AWEIMPickerConfiguration *pickerConfig;
@property (retain, nonatomic) AWEIMPickerPreviewViewController *previewVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentsNameArrayWithContext:(id)a0;
- (id)initWithPickerConfiguration:(id)a0 preViewConfiguration:(id)a1;
- (void).cxx_destruct;

@end
