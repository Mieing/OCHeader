@class NSString, AWEPOIAnchorTempoManager, AWEAwemeModel, UIView;
@protocol AWEPlayInteractionPOIBusinessCardDelegate, AWEHttpTask;

@interface AWEPlayInteractionPOIBusinessCardManager : NSObject <AWEPOIAnchorTempoManagerDelegate, AWEPlayInteractionPOIBusinessCardProtocol>

@property (retain, nonatomic) UIView *tempoView;
@property (copy, nonatomic) NSString *tempoViewItemID;
@property (nonatomic) BOOL hideAnimation;
@property (retain, nonatomic) AWEPOIAnchorTempoManager *tempoManager;
@property (nonatomic) long long retryTimes;
@property (retain, nonatomic) id<AWEHttpTask> task;
@property (nonatomic) double playTimeInterval;
@property (nonatomic) BOOL hadTrackCardDataSuccess;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEPlayInteractionPOIBusinessCardDelegate> delegate;
@property (readonly, nonatomic) BOOL isCardShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)anchorInfo;
- (BOOL)isCardInUse;
- (void)p_close;
- (void)tryToLoadAndShowPOIBusinessCardWithPlayTimeinterval:(double)a0 videoDuration:(double)a1 loopTimes:(long long)a2;
- (id)showInView:(id)a0 bottomY:(double)a1;
- (void)p_clearCard;
- (void)p_tryShowDetail;
- (void)p_trackCardDataSuccess;
- (void)p_tryToShowCard;
- (void)analysisTrackWithAweme:(id)a0 status:(unsigned long long)a1 params:(id)a2;
- (void)p_fetchCardCompletion:(id /* block */)a0;
- (void)dismiss:(BOOL)a0 byClose:(BOOL)a1;
- (BOOL)p_analysisData:(id)a0;
- (void)p_closeCardACK;
- (BOOL)poiAnchorTempoCardClickCloseWithItemID:(id)a0 animation:(BOOL)a1;
- (void)poiAnchorTempoCardOpenDetailWithItemID:(id)a0 logExtra:(id)a1;
- (id)poiAnchorTempoCardGetAwemeInfoWithItemID:(id)a0;
- (void).cxx_destruct;
- (id)contentView;
- (void)clear;
- (void)resumeAnimation;
- (void)reset;
- (void)dismiss:(BOOL)a0;
- (void)cancelAnimation;

@end
