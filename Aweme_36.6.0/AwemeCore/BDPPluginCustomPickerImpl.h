@class BDPPickerView, NSString;

@interface BDPPluginCustomPickerImpl : NSObject <BDPCustomPickerPluginDelegate, BDPPickerViewDelegate>

@property (retain, nonatomic) BDPPickerView *pickerView;
@property (copy, nonatomic) id /* block */ pickerSelectedCallback;
@property (copy, nonatomic) id /* block */ pickerResultCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)bdp_showPickerViewWithModel:(id)a0 onSelect:(id /* block */)a1 completion:(id /* block */)a2;
- (void)bdp_updatePickerWithModel:(id)a0 animated:(BOOL)a1;
- (void)didCancelPicker:(id)a0;
- (void)picker:(id)a0 didConfirmOnIndexs:(id)a1;
- (void)picker:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)bdp_dismissPickerAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end
