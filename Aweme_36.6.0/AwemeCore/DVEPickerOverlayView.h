@class NSString;

@interface DVEPickerOverlayView : UIView <DVEPickerEffectOverlayProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)dismiss;

@end
