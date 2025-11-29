@class NSFileHandle, MMFinderReplayKitVideoEncoder, CIContext, MMFinderLiveGameUserInfo, MMFinderScreenRecordGuideView, NSMutableArray, MMUILabel, NSString, MMTimer, MMFinderLiveReplayKitManager, RPSystemBroadcastPickerView, MMFinderLiveAnchorRecordShowView, MMFinderRecordVideoFrame, NSLock;

@interface MMFinderLiveReplayKitViewModel : NSObject <MMFinderReplayKitVideoEncoderDelegate> {
    struct OpaqueVTPixelRotationSession { } *_rotation_session_;
}

@property (retain, nonatomic) MMFinderReplayKitVideoEncoder *encoder;
@property (retain) MMFinderRecordVideoFrame *videoFrame;
@property (retain, nonatomic) NSLock *videoFrameLock;
@property (nonatomic) BOOL isPrivacy;
@property (nonatomic) unsigned short fps;
@property (nonatomic) unsigned short enableDatalimitsRC;
@property (retain, nonatomic) MMFinderLiveReplayKitManager *replayKitManager;
@property (retain, nonatomic) RPSystemBroadcastPickerView *broadcastPickerView;
@property (retain, nonatomic) MMFinderScreenRecordGuideView *screenRecordGuideView;
@property (retain, nonatomic) MMFinderLiveAnchorRecordShowView *anchorRecordTipView;
@property (nonatomic) struct __CVBuffer { } *privacyPushPixelBuffer;
@property (nonatomic) unsigned long long lastPixelBufferTime;
@property (retain, nonatomic) MMFinderLiveGameUserInfo *gameUserInfo;
@property (retain, nonatomic) MMTimer *privacyCheckTimer;
@property (retain, nonatomic) NSFileHandle *recordLiveFileHandle;
@property (retain, nonatomic) NSMutableArray *recordLiveMemArray;
@property (nonatomic) unsigned int recordLiveMemTime;
@property (nonatomic) struct CGSize { double width; double height; } sizeOfPixelBuffer;
@property (nonatomic) struct CGSize { double width; double height; } sizeOfPrivacyPixelBuffer;
@property (nonatomic) long long videoFrameId;
@property (nonatomic) long long videoFrameDecodeId;
@property (nonatomic) long long videoFrameLostId;
@property (nonatomic) long long videoFrameLostCount;
@property (nonatomic) long long videoFrameDecodeLostCount;
@property (retain, nonatomic) MMUILabel *videoFrameLabel;
@property (retain, nonatomic) CIContext *rotateContext;
@property (nonatomic) long long videoType;
@property (nonatomic) unsigned long long lastReportStrTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (double)videoInterval;
- (BOOL)userH264DirectSend;
- (void)updatePrivacy:(BOOL)a0;
- (void)checkEncodeImage:(id)a0 isLandscape:(BOOL)a1 isPrivacy:(BOOL)a2;
- (void)onEncodeOneFrame:(id)a0;
- (struct __CVBuffer { } *)newRotateCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (struct __CVBuffer { } *)newRotateCVPixelBuffer:(struct __CVBuffer { } *)a0 rotation:(int)a1;
- (void)dealloc;
- (void)stop;
- (void)createCIContext;
- (BOOL)RotateCVPixelBufferIOS16:(struct __CVBuffer { } *)a0 destination:(struct __CVBuffer { } *)a1 rotation:(int)a2;
- (void)onServiceSockeReportStr:(id)a0;
- (void)checkCurMem:(long long)a0;
- (void)handleVideoFrameId:(long long)a0;
- (void)createFileHandle;
- (void)clearFileHandle;
- (void)fileHanddleWriteAudioData:(id)a0;
- (void)fileHanddleWriteVideoData:(id)a0;
- (void)handleVideoDecoderFrameId:(long long)a0;
- (void)clearPrivacyTimer;
- (void).cxx_destruct;

@end
