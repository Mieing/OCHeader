@protocol AWESCPortraitSingleSelectionPanelDelegate;

@interface AWESCPortraitSingleSelectionPanel : DUXSingleSelectionPanel

@property (weak, nonatomic) id<AWESCPortraitSingleSelectionPanelDelegate> delegate;
@property (nonatomic) BOOL enableSwitch;
@property (nonatomic) double maxScale;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
