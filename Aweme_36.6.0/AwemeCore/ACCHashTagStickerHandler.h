@class ACCCommonStickerConfig, ACCHashTagStickerEditView, NSString, AWEInteractionHashtagStickerModel, UIView, AWEVideoPublishViewModel;
@protocol ACCHashTagStickerViewUIProtocol, ACCDraftAutoSaveProtocol, ACCStickerProtocol;

@interface ACCHashTagStickerHandler : ACCStickerHandler <ACCHashTagStickerEditViewDelegate, ACCHashTagStickerHandlerProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) UIView<ACCStickerProtocol> *stickerWrapper;
@property (weak, nonatomic) UIView<ACCHashTagStickerViewUIProtocol> *stickerView;
@property (retain, nonatomic) AWEInteractionHashtagStickerModel *stickerModel;
@property (retain, nonatomic) ACCCommonStickerConfig *stickerConfig;
@property (retain, nonatomic) ACCHashTagStickerEditView *editView;
@property (retain, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) id /* block */ editStateChangedBlock;
@property (weak, nonatomic) id<ACCDraftAutoSaveProtocol> draftSaveService;
@property (nonatomic) BOOL isRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPublishModel:(id)a0;
- (void)addInteractionStickerInfoToArray:(id)a0 idx:(long long)a1;
- (BOOL)canHandleSticker:(id)a0;
- (BOOL)canRecoverSticker:(id)a0;
- (void)recoverSticker:(id)a0;
- (void)startEditWithMethod:(id)a0;
- (void)reloadHashtags:(id)a0;
- (void)fixStickerWrapperPosition;
- (void)endEditingHashtag;
- (void)searchHashtags:(id)a0;
- (void)didSelectHashtag:(id)a0;
- (void)willShowHashtag:(id)a0;
- (void)addHashTagSticker:(id)a0 isAutoAdd:(BOOL)a1;
- (void)reloadRecommendHashTag;
- (void)moveToAutoAddPlace:(id)a0;
- (void)removeHashtagTitleIfNeeded;
- (id)recommendParams;
- (BOOL)isValidChallenge:(id)a0;
- (void)addHashTagInteractionStickerInfo:(id)a0 toArray:(id)a1 idx:(long long)a2;
- (void)addHashTagSticker:(id)a0;
- (void)trackHashtagEventWithModel:(id)a0 event:(id)a1 extraParams:(id)a2;
- (void)trackAddHashtagStickerEvent;
- (void)trackSearchHashtagKeyword:(id)a0 withExtraParams:(id)a1;
- (void)trackDeleteHashtagStickerEvent;
- (void).cxx_destruct;

@end
