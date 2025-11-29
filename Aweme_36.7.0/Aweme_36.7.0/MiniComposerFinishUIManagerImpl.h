@class NSString, UIView;
@protocol ACCTextLoadingViewProtcol, MiniComposerFinishUIManagerDataSource;

@interface MiniComposerFinishUIManagerImpl : NSObject <MiniComposerFinishUIManager>

@property (retain, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (weak, nonatomic) id<MiniComposerFinishUIManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showLoadingViewAnimated:(BOOL)a0;
- (void)hideLoadingViewAnimated:(BOOL)a0;
- (void)dismissComposerViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
