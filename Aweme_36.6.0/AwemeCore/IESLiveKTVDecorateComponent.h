@class IESLiveKTVComponentContext, NSString, IESLiveRealTimeChorusInfo, NSMutableArray;

@interface IESLiveKTVDecorateComponent : IESLiveInteractComponentBase <HTSLiveMessageSubscriber, IESLiveDataSyncDelegate, IESLiveKTVActions>

@property (retain, nonatomic) IESLiveRealTimeChorusInfo *chorusInfo;
@property (retain, nonatomic) NSMutableArray *stageListArray;
@property (weak, nonatomic) IESLiveKTVComponentContext *ktvContext;
@property (nonatomic) BOOL recvFirstMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)didSetAttachingDIContext;
- (void)didKTVIMOrderListChanged;
- (void)updateToLynxIfNeed:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
