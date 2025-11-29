@class IESLiveMultiKTVMVGuidePanel, NSString, IESLiveMultiKTVStore, IESLiveUGCVideoSelectPanel, IESLiveUGCVideoSelectPanelViewModel;

@interface IESLiveUGCVideoSelectPanelHandler : NSObject <IESLiveUGCVideoSelectPanelHandlerProtocol>

@property (retain, nonatomic) IESLiveUGCVideoSelectPanel *videoSelectPanel;
@property (retain, nonatomic) IESLiveMultiKTVMVGuidePanel *guidePanel;
@property (retain, nonatomic) IESLiveUGCVideoSelectPanelViewModel *selectPanelViewModel;
@property (weak, nonatomic) IESLiveMultiKTVStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)showVideoSelectPanelWithSource:(id)a0;
- (id)initWithDelegate:(id)a0 multiKTVStore:(id)a1;
- (void)showGuidePanelWithSource:(id)a0;
- (void).cxx_destruct;
- (id)userType;
- (BOOL)isConnected;

@end
