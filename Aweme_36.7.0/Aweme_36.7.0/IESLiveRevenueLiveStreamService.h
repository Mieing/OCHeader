@class NSString, NSMutableDictionary, IESLiveCombineSubject;
@protocol IESLiveRoomService;

@interface IESLiveRevenueLiveStreamService : IESLiveGeneralBaseService <IESLiveAioLinkStreamCaptureService, IESLiveAioLinkSeiReaderService, IESLiveAioLinkSeiWriterService, IESLiveSEIListener>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL hasReceivedSEI;
@property (retain, nonatomic) NSMutableDictionary *subjectDict;
@property (retain, nonatomic) IESLiveCombineSubject *allSeiSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceUninstall;
- (void)serviceRoomDataReady:(id)a0;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (void)onReceivedSEIRawData:(id)a0;
- (id)captureVideoFrame:(id)a0 compressQuality:(int)a1;
- (id)observeSeiField:(id)a0;
- (void)setSeiField:(id)a0;
- (void)clearSeiField:(id)a0;
- (void)startReceiveSEI;
- (void).cxx_destruct;

@end
