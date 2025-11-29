@class NSString, HwClientEncryptFileInfo, ILinkDeviceData, NSMutableArray;
@protocol MsgToDeviceDelegate;

@interface MsgToDeviceLogic : NSObject

@property (retain, nonatomic) ILinkDeviceData *deviceData;
@property (retain, nonatomic) NSMutableArray *waitingDevices;
@property (nonatomic) BOOL cancelSendingDevice;
@property (nonatomic) int state;
@property (retain, nonatomic) NSString *fileKey;
@property (retain, nonatomic) HwClientEncryptFileInfo *clienEncryptFileInfo;
@property (weak, nonatomic) id<MsgToDeviceDelegate> delegate;

- (id)initWithMsg:(id)a0;
- (void)forwardToDevice:(id)a0;
- (void)forwardCdnMsgToDevice:(id)a0;
- (id)encryptMsgAndSave;
- (BOOL)checkFileSize:(unsigned long long)a0;
- (void)cancelForwardToDevice:(id)a0;
- (void)cancelForward;
- (BOOL)hasForwardTask;
- (void)uploadMsgToCDN:(id)a0;
- (void)startWaitingTask;
- (void)startNetworkRequest:(id)a0;
- (void)startNetworkRequest:(id)a0 withDevice:(id)a1;
- (void)startCompressRawVideo:(id)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;

@end
