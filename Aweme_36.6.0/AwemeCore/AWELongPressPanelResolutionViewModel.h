@class NSArray, NSString, DUXContentSheet, UILabel, NSObject;
@protocol AWEPlayerResolutionService;

@interface AWELongPressPanelResolutionViewModel : AWELongPressPanelBaseViewModel <DUXSingleSelectionPanelDelegate, AWEPlayVideoMessage>

@property (retain, nonatomic) DUXContentSheet *containerSheet;
@property (retain, nonatomic) NSObject<AWEPlayerResolutionService> *resolutionService;
@property (retain, nonatomic) NSArray *gearTypesArr;
@property (weak, nonatomic) UILabel *resolutionTitleLabel;
@property (retain, nonatomic) NSArray *resolutionList;
@property (nonatomic) unsigned long long currentResolutionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)longPressPanelViewModel;

- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (id)selectionPanel:(id)a0 optionNameAtRow:(long long)a1;
- (void)selectionPanel:(id)a0 didClickRow:(long long)a1;
- (id)getCommonTrackParams;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (id)getRightView;
- (void)showResolutionSelectPanel;
- (BOOL)usePlayerResolution;
- (id)getPlayerResolutionCommonTrackParams;
- (id)describeString;
- (BOOL)needShow;
- (void).cxx_destruct;

@end
