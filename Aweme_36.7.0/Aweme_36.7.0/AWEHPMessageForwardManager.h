@class NSPointerArray;

@interface AWEHPMessageForwardManager : NSObject

@property (retain, nonatomic) NSPointerArray *delegateArray;

- (BOOL)isEditPanelEnabled;
- (void)didLongPressTopBar;
- (BOOL)showPanelWithEnterMethod:(id)a0;
- (void)registerDelegate:(id)a0;
- (void).cxx_destruct;

@end
