@class NSString, AWEECOMIMCardBaseView;

@interface AWEECOMIMBaseCardCell : AWEECOMIMBaseUserMsgCell <AWEECOMIMCardBaseViewDelegate>

@property (retain, nonatomic) AWEECOMIMCardBaseView *cardView;
@property (readonly, nonatomic) AWEECOMIMCardBaseView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;

- (void)didCustomInit;
- (void)baseCardViewDidClickImage:(id)a0 imageItemModel:(id)a1 clickChainTask:(id)a2;
- (void)baseCardViewDidClickQuestion:(id)a0;
- (void)baseCardViewDidSendSelectableMsgCardMessage:(id)a0;
- (void)cardViewDidChangeHeight:(id)a0;
- (void)baseCardViewDidShowFullText:(id)a0 isShowFullText:(BOOL)a1;
- (BOOL)canTrackCellDetailDisplay;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;

@end
