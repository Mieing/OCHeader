@class NSString, IESECTextWithIconElement;

@interface IESECGoodsDetailBottomNewCountDownTipCell : IESECGoodsDetailBottomNewTipCell <IESECGoodsDetailViewUpdateMessage>

@property (retain, nonatomic) IESECTextWithIconElement *tipModel;
@property (copy, nonatomic) NSString *template;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)goodsDetailActivityDidUpdateCountdown:(id)a0 goodsDetailUID:(id)a1;
- (void)goodsDetailActivityStateDidChanged:(long long)a0 goodsDetailUID:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tipModel:(id)a1 template:(id)a2 identifier:(id)a3;
- (void).cxx_destruct;
- (void)updateContent;
- (void)dealloc;

@end
