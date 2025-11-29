@class BDByteScreenCastDurationHeartbeatTracker, BDByteScreenCastContext;
@protocol BDByteScreenCastMessageHandlerDelegate;

@interface BDByteScreenCastMessageHandler : NSObject

@property (retain, nonatomic) BDByteScreenCastContext *byteScreenCastContext;
@property (weak, nonatomic) id<BDByteScreenCastMessageHandlerDelegate> delegate;
@property (retain, nonatomic) BDByteScreenCastDurationHeartbeatTracker *heartbeatTracker;

- (id)handleReceivedMessage:(id)a0;
- (id)initWithScreenCastContext:(id)a0;
- (void)setupMessageServer;
- (void)handleDLNAMediaInfo:(id)a0;
- (void)handleVideoDidChangeWithVideoID:(id)a0 isAuto:(BOOL)a1;
- (void)handleClarityChangedMessage:(id)a0;
- (void)handleReConnectMessage;
- (void)handleChangeConnectDeviceMessageWith:(id)a0;
- (void)handleCastPlayResult:(id)a0;
- (void)handleSwitchDecodeResult:(id)a0;
- (void)onLivePlayStateChange:(id)a0;
- (void)onDeviceParamsUpdated:(id)a0;
- (void)onWebEventWithParams:(id)a0;
- (void)onReplyAckWithParams:(id)a0;
- (void).cxx_destruct;

@end
