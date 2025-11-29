@class IESGCPHierarchyPickerView;

@interface IESGCPLynxHierarchyPickerElement : LynxUI

@property (retain, nonatomic) IESGCPHierarchyPickerView *pickerView;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__442;
+ (id)__lynx_prop_config__401;

- (void)pickerSelectFinishedWithCancel:(BOOL)a0 selectedLeafItem:(id)a1;
- (void)title:(id)a0 requestReset:(BOOL)a1;
- (void)items:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end
