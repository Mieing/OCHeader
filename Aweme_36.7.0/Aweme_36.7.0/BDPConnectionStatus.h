@class BDPConnectionStatusWindow, UIButton, UIView, BDPUniqueID, UILabel;

@interface BDPConnectionStatus : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) BDPConnectionStatusWindow *connectionStatusWindow;
@property (retain, nonatomic) UILabel *connectionStatusText;
@property (retain, nonatomic) UILabel *connectionStatusPoint;
@property (retain, nonatomic) UIView *connectionStatusButtonWindow;
@property (retain, nonatomic) UIButton *connectionStatusReconnectionButton;
@property (retain, nonatomic) UIView *connectionStatusLayerMask;

- (void)showConnectionStatusWindowIfNeed;
- (void)changeConnectionStatusTextIfNeed:(id)a0 pointColor:(id)a1;
- (void)onReconnectionButtonClick;
- (void)recoverConnectionStatusLayoutIfNeed;
- (void)addSubviewToContainerVC:(BOOL)a0 inLocalNetwork:(BOOL)a1;
- (void)changeConnectionStatusLayoutIfNeed;
- (void)showNetworkChangeToast;
- (void)addLayerMaskIfNeed;
- (void)removeLayerMaskIfNeed;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
