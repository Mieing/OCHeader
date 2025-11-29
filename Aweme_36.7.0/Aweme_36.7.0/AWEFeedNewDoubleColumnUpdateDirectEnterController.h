@class NSString;

@interface AWEFeedNewDoubleColumnUpdateDirectEnterController : AWEDCFeedBaseController <AWEFeedHomepageLongPressEditViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterContainerWithModel:(id)a0;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)panel:(id)a0 didCloseWithCurrentSelectedItem:(id)a1;
- (void)panel:(id)a0 didSelectItem:(id)a1;
- (void)panel:(id)a0 selectItem:(id)a1 didChangeSwitch:(id)a2;
- (void)showSnackBar;
- (BOOL)couldUpdateToDirectSwitch;
- (BOOL)couldShowSnackBar;
- (void)recordEnterTimestamps;
- (BOOL)isNeedUpdateToDirectSwitch;
- (void)clearHomeViewUserActionTimestamps;
- (void)recordClickTimestamps;

@end
