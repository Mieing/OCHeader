@class NSMutableArray, UIImageView, UISwitch, UILabel, UIView, UIButton;

@interface WARemoteDebugPanelView : UIView {
    struct CGPoint { double x; double y; } _priorPoint;
    UIImageView *_connectImageView;
    UILabel *_connectLabel;
    UIImageView *_serverImageView;
    UILabel *_serverLabel;
    UILabel *_noConfirmedLabel;
    UILabel *_noSendLabel;
    UILabel *_sendoutLabel;
    UILabel *_recvinLabel;
    UIView *_splitLine;
    UIButton *_shrinkButton;
    UIButton *_expandButton;
    UISwitch *_showLogSwitch;
    UILabel *_showLogLabel;
    UIView *_containerView;
    NSMutableArray *_labelList;
}

@property (retain, nonatomic) UIButton *stopButton;

- (void)setupSubviews;
- (void)updateConnectState:(id)a0;
- (void)updateServerState:(id)a0;
- (void)updateNoConfirmedCount:(unsigned int)a0;
- (void)updateNoSendCount:(unsigned int)a0;
- (void)updateSendLength:(id)a0 sendCount:(unsigned int)a1;
- (void)updateRecvLength:(id)a0 recvCount:(unsigned int)a1;
- (void)updatePrintItemList:(id)a0;
- (void)refreshPanelHeight;
- (void)handleLongPress:(id)a0;
- (void)onSwitchChanged:(id)a0;
- (void)onExpandButtonChanged:(id)a0;
- (void)onShrinkButtonChanged:(id)a0;
- (void).cxx_destruct;

@end
