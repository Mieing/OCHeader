@class WAPageSheetContentView, NSString, MMPageSheetAdapter, UIView;
@protocol WAPageSheetDelegate;

@interface WAPageSheet : MMObject <MMPageSheetAdapterDelegate>

@property (retain, nonatomic) WAPageSheet *retainSheet;
@property (copy, nonatomic) id /* block */ showCompleteAction;
@property (copy, nonatomic) id /* block */ dismissCompleteAction;
@property (readonly, nonatomic) MMPageSheetAdapter *adapter;
@property (weak, nonatomic) id<WAPageSheetDelegate> delegate;
@property (weak, nonatomic) UIView *parentView;
@property (retain, nonatomic) WAPageSheetContentView *contentView;
@property (readonly, nonatomic) BOOL isShown;
@property (nonatomic) BOOL forbidTapToDismiss;
@property (nonatomic) BOOL bSupportRotate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)showWithCompletion:(id /* block */)a0;
- (void)showInView:(id)a0 completion:(id /* block */)a1;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)pushPageSheet:(id)a0;
- (void)layoutSubViews;
- (void)resetContentViewCornerRadius;
- (double)contentWidth;
- (double)contentHeight;
- (void)pageSheetWillAppear:(id)a0;
- (void)pageSheetDidAppear:(id)a0;
- (void)pageSheetWillClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void)pageSheetDidClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void)didRotate:(id)a0;
- (double)operateButtonBottomInset;
- (void).cxx_destruct;

@end
