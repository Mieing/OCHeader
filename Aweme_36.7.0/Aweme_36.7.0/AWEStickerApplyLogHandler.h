@class NSString, IESEffectModel;
@protocol ACCStickerPickerService;

@interface AWEStickerApplyLogHandler : AWEStickerApplyBaseHandler <ACCRecordVideoEventHandler, ACCRecordFlowServiceSubscriber>

@property (weak, nonatomic) id<ACCStickerPickerService> stickerPickerService;
@property (retain, nonatomic) IESEffectModel *currentApplyCompleteSticker;
@property (retain, nonatomic) IESEffectModel *waitingSticker;
@property (nonatomic) double stickerApplyStartTime;
@property (nonatomic) double trackStickerApplyStartTime;
@property (retain, nonatomic) NSString *trackStayPropID;
@property (nonatomic) BOOL hasShootSameReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)flowServiceDidAddFragment:(id)a0;
- (void)handleApplicationDidBecomeActive;
- (id)recordVideoEvent;
- (void)camera:(id)a0 didRecvMessage:(id)a1;
- (void)camera:(id)a0 willApplySticker:(id)a1 propSource:(long long)a2;
- (void)camera:(id)a0 didApplySticker:(id)a1 success:(BOOL)a2;
- (void)handlerDidBecomeActive;
- (void)startTimingPropStayTimeIfNeeded;
- (void)trackPropStayTimeAfterApplyWithoutRecordIfNeeded;
- (void)saveLastUsePropTimestamp;
- (void)trackApplyPropSuccessTotalTimeWithCamera:(id)a0 status:(BOOL)a1;
- (void)applyPropFinishTrackForRecordOpenPropSlidePanel:(BOOL)a0;
- (void)trackPropStayTimeAfterApplyWithIsRecord:(BOOL)a0;
- (void).cxx_destruct;
- (void)handleApplicationDidEnterBackground;
- (void)dealloc;

@end
