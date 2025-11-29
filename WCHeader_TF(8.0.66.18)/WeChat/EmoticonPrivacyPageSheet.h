@class NSString;

@interface EmoticonPrivacyPageSheet : MMPageSheetBaseViewController <ILinkEventExt>

@property (nonatomic) int reportExtranceScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)onClickConfirmButton;
- (void)onClickCancelButton;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)reportAction:(int)a0;

@end
