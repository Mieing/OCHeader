@class MJShootComposingTemplatePanelView, UIColor, MJShootComposingTemplatePanelViewModel, NSString;
@protocol MJShootComposingTemplatePanelHalfScreenViewControllerDelegate;

@interface MJShootComposingTemplatePanelHalfScreenViewController : MMPageSheetBaseViewController <MJShootComposingTemplatePanelViewDelegate>

@property (retain, nonatomic) MJShootComposingTemplatePanelView *panelView;
@property (retain, nonatomic) UIColor *maskBackgroundColor;
@property (nonatomic) BOOL useIphoneUIStyleInIpad;
@property (weak, nonatomic) id<MJShootComposingTemplatePanelHalfScreenViewControllerDelegate> delegate;
@property (readonly, nonatomic) MJShootComposingTemplatePanelViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)setupPageSheetConfig;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)pageSheetDidChangeVisibleHeight:(double)a0;
- (void)shootTemplatePanelView:(id)a0 didSelectItem:(id)a1 tabID:(unsigned long long)a2 atIndex:(unsigned long long)a3;
- (void)shootTemplatePanelView:(id)a0 willDisplayTemplateItem:(id)a1 tabID:(unsigned long long)a2 atIndex:(unsigned long long)a3 isReloadingData:(BOOL)a4;
- (void)shootTemplatePanelView:(id)a0 didEndDisplayingTemplateItem:(id)a1 tabID:(unsigned long long)a2 atIndex:(unsigned long long)a3 isReloadingData:(BOOL)a4;
- (void)shootTemplatePanelView:(id)a0 didSelectTab:(unsigned long long)a1;
- (void)reloadData;
- (void).cxx_destruct;

@end
