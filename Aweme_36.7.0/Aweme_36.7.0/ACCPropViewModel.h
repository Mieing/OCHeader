@class IESEffectModel, NSString, RACSignal, NSDictionary, RACSubject, NSMutableArray, ACCPowerTracker;

@interface ACCPropViewModel : ACCRecorderViewModel <ACCEffectProvideProtocol>

@property (retain, nonatomic) RACSignal *applyStickerSignal;
@property (retain, nonatomic) RACSubject *applyStickerSubject;
@property (retain, nonatomic) RACSignal *selectTabSignal;
@property (retain, nonatomic) RACSignal *changeTabSignal;
@property (retain, nonatomic) RACSubject *selectTabSubject;
@property (retain, nonatomic) RACSubject *changeTabSubject;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (copy, nonatomic) NSString *trackStayPropID;
@property (retain, nonatomic) ACCPowerTracker *powerTracker;
@property (readonly, nonatomic) NSMutableArray *activityTimerange;
@property (copy, nonatomic) NSString *currentCategoryKey;
@property (retain, nonatomic) IESEffectModel *currentApplyCompleteSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long musicBubbleStatus;
@property (retain, nonatomic) NSString *lastAppliedStickerIdentifier;

- (void)startTimingPropStayTimeWithPropID:(id)a0;
- (void)trackPropStayTimeAfterApplyIfNeed;
- (void)trackCommerceStickerExperienceDuration:(double)a0;
- (void)sendSignal_applySticker:(id)a0;
- (void)sendSignal_propPanelDidSelectTabAtIndex:(long long)a0;
- (void)sendSignal_propPanelDidTapToChangeTabAtIndex:(long long)a0;
- (long long)currentDateInteger;
- (void)resetStickerWithStickerID:(id)a0 forCategory:(id)a1;
- (void)insertStickers:(id)a0 forCategory:(id)a1;
- (void)updateTrackInfo:(id)a0;
- (void)trackCommerceStickerInfo;
- (void)trackClickRemovePropTab;
- (void)trackPropSaveWithEffectIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
