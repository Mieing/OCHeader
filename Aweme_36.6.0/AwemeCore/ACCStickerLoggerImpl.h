@class NSString, AWEVideoPublishViewModel;

@interface ACCStickerLoggerImpl : NSObject <ACCStickerLogger>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mediaCountInfo;
- (id)aiMemoriesCommonParams;
- (void)logClickTextStickerEditEntranceWith:(id)a0 extraParams:(id)a1;
- (id)defaultToneId;
- (id)p_commonTrackInfoWithExtraTrackInfo:(id)a0;
- (void)logTextStickerEditFinished:(BOOL)a0 textLength:(unsigned long long)a1 anchor:(BOOL)a2 extraInfo:(id)a3;
- (void)logTextStickerSocialInfoWhenAddFinishedWithTrackInfo:(id)a0;
- (void)logTextStickerDidSelectedToolbarColorItem:(id)a0;
- (void)logTextStickerDidSelectColor:(id)a0 templateUseType:(long long)a1;
- (void)logTextStickerDidChangeTextStyle:(unsigned long long)a0 templateUseType:(long long)a1;
- (void)logTextStickerDidSelectFont:(id)a0 templateUseType:(long long)a1 isUseCache:(BOOL)a2;
- (void)logTextStickerDidChangeAlignment:(long long)a0 templateUseType:(long long)a1;
- (void)logTextStickerDidMoveWithExtraParams:(id)a0;
- (void)logTextStickerViewDidTapOnceWithExtraTrackInfo:(id)a0;
- (void)logClickTextStickerEditEntranceWith:(id)a0;
- (void)logTextStickerViewWillDeleteWithEnterMethod:(id)a0 extraTrackInfo:(id)a1;
- (void)logStickerViewWillDeleteWithEnterMethod:(id)a0;
- (void)logTextReadingBubbleShow:(BOOL)a0;
- (void)logTextStickerViewDidTriggeredSocialEntraceWithEntraceName:(id)a0 isMention:(BOOL)a1;
- (void)logClickTextReading:(BOOL)a0 type:(unsigned long long)a1 extraParams:(id)a2;
- (void)logCancelTextReading:(BOOL)a0;
- (void)logToneClick:(BOOL)a0 speakerID:(id)a1 speakerName:(id)a2 isDefaultSelected:(BOOL)a3;
- (void)logToneCancel:(BOOL)a0;
- (void)logTextReadingComplete:(BOOL)a0 speakerID:(id)a1 speakerName:(id)a2 extraParams:(id)a3;
- (void)logTextReadingPanelListFetchInfo:(id)a0;
- (void)logTagWillDeleteWithAddtionalInfo:(id)a0;
- (void)logTagDragWithAddtionalInfo:(id)a0;
- (void)logTagReEditWithAddtionalInfo:(id)a0;
- (void)logTagAdjustWithAddtionalInfo:(id)a0;
- (void)logTextStickerDidExceedMaxWordCountWithStickerId:(id)a0;
- (void)logTextStickerDidShowWithExtraParams:(id)a0;
- (void).cxx_destruct;

@end
