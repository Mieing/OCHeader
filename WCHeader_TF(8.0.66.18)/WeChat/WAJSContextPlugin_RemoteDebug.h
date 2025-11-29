@class NSString, CADisplayLink, WARemoteDebugPanelView, WARemoteDebugMaskView, NSMutableArray;

@interface WAJSContextPlugin_RemoteDebug : WAJSContextPluginBase {
    double _panelWidth;
    NSMutableArray *_printItemList;
    CADisplayLink *_updateTimer;
    WARemoteDebugPanelView *_panelView;
    WARemoteDebugMaskView *_maskView;
}

@property (nonatomic) BOOL isDisplay;
@property (nonatomic) unsigned int noConfirmedCount;
@property (nonatomic) unsigned int noSendCount;
@property (copy, nonatomic) NSString *sendLength;
@property (nonatomic) unsigned int sendCount;
@property (copy, nonatomic) NSString *recvLength;
@property (nonatomic) unsigned int recvCount;
@property (copy, nonatomic) NSString *connectString;
@property (copy, nonatomic) NSString *serverString;
@property (copy, nonatomic) NSString *maskString;

- (void)dealloc;
- (id)init;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (void)initPanelView;
- (void)initMaskView;
- (void)onStopButtonChanged:(id)a0;
- (void)consoleLog:(id)a0 isSendout:(BOOL)a1;
- (void)showMaskView:(id)a0 isButtonHidden:(BOOL)a1;
- (void)dismissMaskView;
- (void)didRotate:(id)a0;
- (void)initUpdateTimer;
- (void)destoryUpdateTimer;
- (void)updatePanelView;
- (void).cxx_destruct;

@end
