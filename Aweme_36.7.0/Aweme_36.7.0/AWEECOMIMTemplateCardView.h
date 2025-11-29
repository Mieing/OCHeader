@class UIView, AWEECOMIMDynamicCardContainerView, NSString, AWEECOMIMTemplateCardModel, AWEECOMIMDynamicCardErrorView, NSDictionary, AWEECOMIMCardComponentFailedView, AWEECOMIMPageTrackUtil, AWEECOMIMDynamicCardBaseElementView;
@protocol AWEECOMIMTemplateCardViewProtocol, AWEECOMIMCardComponentLoadingViewProtocol;

@interface AWEECOMIMTemplateCardView : UIView <AWEECOMIMMsgCellLifeCycle>

@property (retain, nonatomic) AWEECOMIMDynamicCardContainerView *cardView;
@property (retain, nonatomic) AWEECOMIMDynamicCardErrorView *errorView;
@property (retain, nonatomic) UIView<AWEECOMIMCardComponentLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) NSDictionary *dynamicDataDict;
@property (retain, nonatomic) AWEECOMIMDynamicCardBaseElementView *cardViewV2;
@property (retain, nonatomic) AWEECOMIMCardComponentFailedView *failedView;
@property (retain, nonatomic) AWEECOMIMTemplateCardModel *cellModel;
@property (weak, nonatomic) id<AWEECOMIMTemplateCardViewProtocol> cardCellDelegate;
@property (weak, nonatomic) AWEECOMIMPageTrackUtil *pageTrackUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;

- (void)didCustomInit;
- (void)fetchDynamicDataAndUpdateCardView;
- (void)cardViewDidChangeHeight;
- (void)willDisplayByMessageVisible;
- (void)didEndDisplayingByMessageVisible;
- (void)addCardViewV2;
- (id)generateCardViewV2;
- (void)receiveDynamicDataWithSuccess:(BOOL)a0 forceUpdate:(BOOL)a1;
- (id)initWithCardCellDelegate:(id)a0;
- (id)cardResourceList;
- (void)trackBeginClickWithActionModel:(id)a0 contextDict:(id)a1 clickUUID:(id)a2;
- (void).cxx_destruct;
- (void)viewControllerWillAppear;
- (void)viewControllerDidDisappear;

@end
