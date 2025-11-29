@class UIFont, NSString, IESECGoodsDetailParameters, UITapGestureRecognizer;

@interface IESECGoodsFeedActionButton : IESECButton <IESECReservateDepositMessage, IESECLLComponent> {
    IESECGoodsDetailParameters *_param;
    UITapGestureRecognizer *_tapGesture;
}

@property (retain, nonatomic) UIFont *attributedTitleFont;
@property (nonatomic) BOOL useNewUI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIWithModel:(id)a0;
- (void)registerMessages;
- (void)updateWithParameters:(id)a0;
- (void)unregisterMessages;
- (id)updateTextWithModel:(id)a0;
- (void)updateWithActionModel:(id)a0;
- (void)handleActivityUpdateNotification:(id)a0;
- (void)reservateDepositSuccess;
- (void)updateNewColorWithType:(long long)a0;
- (void)updateColorWithType:(long long)a0;
- (void)updateBaseUIWithActionModel:(id)a0;
- (void).cxx_destruct;
- (void)setFont:(id)a0;
- (id)init;
- (void)dealloc;
- (void)handleTapGesture:(id)a0;

@end
