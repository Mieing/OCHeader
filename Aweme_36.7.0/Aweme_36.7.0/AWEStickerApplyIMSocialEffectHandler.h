@class NSString;
@protocol ACCRecordSwitchModeService;

@interface AWEStickerApplyIMSocialEffectHandler : AWEStickerApplyBaseHandler <ACCRecordFlowServiceSubscriber, ACCRecordFlowServiceSubscriber>

@property (copy, nonatomic) NSString *imgK;
@property (copy, nonatomic) NSString *vPath;
@property (nonatomic) BOOL isDuet;
@property (nonatomic) BOOL isFollow;
@property (nonatomic) BOOL isVideoRecord;
@property (nonatomic) long long layoutType;
@property (nonatomic) long long imRecordType;
@property (nonatomic) unsigned long long enterType;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flowServiceWillAddFragment:(id)a0;
- (void)flowServiceDidCompleteRecord;
- (void)resetBGVideo;
- (void)bgVideoPlay;
- (void)bgVideoPause;
- (void)bgVideoMutePlayer:(BOOL)a0;
- (id)publishModel;
- (id)imModel;
- (void)camera:(id)a0 willApplySticker:(id)a1;
- (void)handlerDidBecomeActive;
- (void)p_resetIMSocialEffectReportModel;
- (BOOL)isIMSocialEffect:(id)a0;
- (id)p_checkChatCategory:(id)a0;
- (void).cxx_destruct;

@end
