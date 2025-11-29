@class AWEMusicDetailHeaderDataHelper, AWEMusicDetailHeaderLayoutInspirationLayoutManager, AWEMusicDetailHeaderPGCMusicInfoContainerView, NSString, AWEMusicDetailHeaderMatchedLunaBarView;
@protocol AWEMusicDetailPGCRelatedInfoViewDelegate;

@interface AWEMusicDetailInspirationPGCRelatedInfoView : UIView <AWEMusicDetailPGCMusicInfoViewDelegate, AWEMusicDetailHeaderMatchedLunaBarViewDelegate>

@property (weak, nonatomic) AWEMusicDetailHeaderDataHelper *dataHelper;
@property (retain, nonatomic) AWEMusicDetailHeaderLayoutInspirationLayoutManager *layoutManager;
@property (retain, nonatomic) AWEMusicDetailHeaderPGCMusicInfoContainerView *matchedPGCMusicContainerView;
@property (retain, nonatomic) AWEMusicDetailHeaderMatchedLunaBarView *matchedLunaBarView;
@property (weak, nonatomic) id<AWEMusicDetailPGCRelatedInfoViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)jumpToMatchedPGCMusicDetailPage;
- (void)weakBindDataHelper:(id)a0;
- (void)jumpToMatchedLunaMusic;
- (id)initWithLayoutManager:(id)a0;
- (void)updateDummyHeaderView;
- (void)updateDetailPGCRelatedView;
- (void)updateDetailPGCRelatedViewConstraint;
- (void)updateViewsVisibleByType:(unsigned long long)a0;
- (void)p_updateMusicPGCInfoView;
- (BOOL)shouldShowPGCRelatedView;
- (void).cxx_destruct;
- (void)setupUI;

@end
