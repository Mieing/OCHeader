@class NSArray, NSString, NSMutableArray;

@interface AWEStickerApplyUserMentionHandler : AWEStickerApplyBaseHandler <ACCRecordFlowServiceSubscriber, ACCCameraLifeCircleEvent, ACCDuetSessionSwtichServiceSubscriber, AWEStickerApplyUserMentionHandlerProtocol>

@property (retain, nonatomic) NSArray *businessTitleExtraInfoArray;
@property (copy, nonatomic) NSString *publishTitle;
@property (retain, nonatomic) NSMutableArray *stickerAutoAddStickerArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addPropUserMentionSticker:(id)a0;
+ (void)addPropUserMentionSticker:(id)a0 stickerAddArray:(id)a1;
+ (BOOL)canAddExtraInfoWithRepository:(id)a0 propMentionModel:(id)a1;

- (void)cameraService:(id)a0 pauseRecordWithError:(id)a1;
- (void)flowServiceWillEnterNextPageWithMode:(id)a0;
- (void)finishSwitchToDuetMode;
- (void)finishSwitchToNormalMode;
- (void)camera:(id)a0 didRecvMessage:(id)a1;
- (void)handlerDidBecomeActive;
- (void)saveBusinessTitleExtraInfo;
- (void)resetBusinessTitleExtraInfo;
- (void)resetStickerAutoMentionSticker;
- (void).cxx_destruct;
- (void)setContainer:(id)a0;

@end
