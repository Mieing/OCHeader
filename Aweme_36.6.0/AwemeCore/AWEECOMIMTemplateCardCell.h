@class NSString, AWEECOMIMTemplateCardView, AWEECOMIMTemplateCardModel, AWEECOMIMLynxCardView;

@interface AWEECOMIMTemplateCardCell : AWEECOMIMBaseUserMsgCell <AWEECOMIMTemplateCardViewProtocol, AWEECOMIMLynxCardViewDelegate>

@property (retain, nonatomic) AWEECOMIMTemplateCardView *templateCardView;
@property (retain, nonatomic) AWEECOMIMLynxCardView *lynxCardView;
@property (retain, nonatomic) AWEECOMIMTemplateCardModel *cellModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;

- (void)didCustomInit;
- (void)fetchDynamicDataAndUpdateCardView;
- (void)updateTemplateModelCallback;
- (void)cardViewDidChangeHeight;
- (BOOL)enableNewFetchDynamicData;
- (BOOL)canTrackCellDetailDisplay;
- (BOOL)canShowMenuItemForward;
- (id)cellDetailDisplayParams;
- (void)willDisplayByMessageVisible;
- (void)didEndDisplayingByMessageVisible;
- (void)updateCardSize;
- (void)msgExposureCallback:(id)a0;
- (void)fetchDynamicDataAndUpdateCardViewWithExtraBody:(id)a0 extraParams:(id)a1 extraHeader:(id)a2;
- (void)cardTouchInside;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (void)viewControllerWillAppear;
- (void)viewControllerDidDisappear;

@end
