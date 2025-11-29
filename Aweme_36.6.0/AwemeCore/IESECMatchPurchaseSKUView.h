@class NSString, UIView;
@protocol IESECSKUViewProtocol, IESECMatchPurchaseSKUViewDelegate;

@interface IESECMatchPurchaseSKUView : UIView <IESECSKUViewDelegate>

@property (retain, nonatomic) UIView<IESECSKUViewProtocol> *skuView;
@property (weak, nonatomic) id<IESECMatchPurchaseSKUViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showInView:(id)a0 withDelegate:(id)a1 model:(id)a2 request:(id)a3 andCombinationID:(id)a4 sourceBTMToken:(id)a5;

@end
