@class AWERVDetailPageContext, UIViewController;

@interface AWERVLVBasePanelViewModel : NSObject

@property (readonly, nonatomic) AWERVDetailPageContext *pageContext;
@property (weak, nonatomic) UIViewController *container;

- (void)containerDidLayoutSubviews;
- (id)panelID;
- (void)panelDidLoad;
- (void)panelWillAppear;
- (void)panelDidAppear;
- (void)panelDidDisAppear;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
