@class MJActionPanelViewModel, NSString, MJActionPanelMainMenuView;
@protocol MJActionPanelViewDelegate;

@interface MJActionPanelView : MMUIView <MJActionPanelMainMenuViewDelegate>

@property (retain, nonatomic) MJActionPanelMainMenuView *mainMenuView;
@property (readonly, nonatomic) MJActionPanelViewModel *viewModel;
@property (weak, nonatomic) id<MJActionPanelViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
