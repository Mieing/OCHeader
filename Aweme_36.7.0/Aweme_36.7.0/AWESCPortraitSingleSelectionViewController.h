@class NSString, AWESCPortraitSingleSelectionPanel, DUXContentSheet;
@protocol BDSCControlSettingPanelDelegate;

@interface AWESCPortraitSingleSelectionViewController : UIViewController <AWESCPortraitSingleSelectionPanelDelegate, BDSCControlSettingPanelProtocol>

@property (weak, nonatomic) AWESCPortraitSingleSelectionPanel *panel;
@property (retain, nonatomic) DUXContentSheet *sheet;
@property (weak, nonatomic) id<BDSCControlSettingPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss:(BOOL)a0 completion:(id /* block */)a1;
- (void)configWithModel:(id)a0;
- (long long)currentSelectedIndex;
- (id)selectionPanel:(id)a0 optionNameAtRow:(long long)a1;
- (id)selectionPanel:(id)a0 iconAtRow:(long long)a1;
- (void)selectionPanel:(id)a0 didClickRow:(long long)a1;
- (id)dataSourceArray;
- (void)preHandleCell:(id)a0 atIndex:(long long)a1;
- (long long)accessoryStyleAtIndex:(long long)a0;
- (id)accessoryInfoAtIndex:(long long)a0;
- (Class)sheetClass;
- (void)configWithCastSettingOptions:(unsigned long long)a0 exposedOptions:(unsigned long long)a1;
- (id)tagTextAtIndex:(long long)a0;
- (void)updateLimitedResolution:(id)a0;
- (long long)selectionPanel:(id)a0 accessoryStyleAtRow:(long long)a1;
- (id)selectionPanel:(id)a0 tagTextAtRow:(long long)a1;
- (id)selectionPanel:(id)a0 accessoryInfoAtRow:(long long)a1;
- (void)selectionPanel:(id)a0 willShowCell:(id)a1 atIndexPath:(id)a2;
- (void)reloadData;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)iconImageAtIndex:(long long)a0;
- (id)titleString;
- (void)show:(id)a0 completion:(id /* block */)a1;
- (void)selectItemAtIndex:(long long)a0;

@end
