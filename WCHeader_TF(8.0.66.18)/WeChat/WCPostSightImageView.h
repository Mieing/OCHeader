@class SightDraft, NSString, WCAssetStateView, SightIconView;

@interface WCPostSightImageView : UIImageView <WCSightDraftProcessTaskExt>

@property (retain, nonatomic) SightIconView *playIconView;
@property (retain, nonatomic) WCAssetStateView *stateView;
@property (retain, nonatomic) SightDraft *sightDraft;
@property (readonly, nonatomic) BOOL shownError;
@property (readonly, nonatomic) BOOL canReselect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)thumbImageFromSightDraft:(id)a0;
- (void)updatePlayIconView;
- (void)updateStateView;
- (void)sightDraftProcessTask:(id)a0 didFinishProcessingSightDraft:(id)a1;
- (void)sightDraftProcessTask:(id)a0 didFailToProcessSightDraft:(id)a1;
- (void).cxx_destruct;

@end
