@class NSString, MMPageSheetAdapter;

@interface WCAdHalfScreenContainerLiteAppView : WCAdHalfScreenContainerBaseView <MMPageSheetAdapterDelegate>

@property (retain, nonatomic) MMPageSheetAdapter *sheetAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainerInfo:(id)a0;
- (void)initView;
- (id)getHalfScreenLiteAppViewController;
- (double)calcContentHeight;
- (void)showWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0;
- (void)ensureLiteAppHalfScreenDealloc;
- (void)pageSheetDidClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void).cxx_destruct;

@end
