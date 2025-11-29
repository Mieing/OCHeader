@class AWEECOMIMDynamicCardBaseElementView, AWEECOMIMChatListTopNotifyCardModel, UIView;
@protocol AWEECOMIMCardComponentLoadingViewProtocol;

@interface AWEECOMIMChatListTopNotifyCardCell : UICollectionViewCell

@property (retain, nonatomic) AWEECOMIMDynamicCardBaseElementView *cardViewV2;
@property (retain, nonatomic) AWEECOMIMChatListTopNotifyCardModel *cellModel;
@property (retain, nonatomic) UIView<AWEECOMIMCardComponentLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) UIView *errorView;
@property (copy, nonatomic) id /* block */ cellClickTrackBlcok;
@property (copy, nonatomic) id /* block */ cellUpdateBlock;

+ (double)cellHeightWithModel:(id)a0 cardWidth:(double)a1;

- (void)didCustomInit;
- (void)fetchDynamicDataAndUpdateCardView;
- (void)updateTemplateModelCallback;
- (void)cardViewDidChangeHeight;
- (void)trackCardButtonTap:(id)a0 materialName:(id)a1 extParams:(id)a2 unitBtmId:(id)a3 responder:(id)a4 needSetBcm:(BOOL)a5;
- (void)transferSchemaToSkip:(id)a0 unitBtmId:(id)a1 responder:(id)a2 needSetBcm:(BOOL)a3;
- (void)addCardViewV2;
- (id)generateCardViewV2;
- (void)updateCellWithModel:(id)a0 cardWidth:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isDarkTheme;

@end
