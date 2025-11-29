@class IESECGoodsDetailParameters, NSString, IESECGoodsDetailTracker;
@protocol IESECGoodsDetailInfoViewEventDelegate;

@interface IESECGoodsDetailBaseComponentView : UIView <IESECGoodsDetailComponentViewProtocol>

@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (nonatomic) long long viewStyle;
@property (readonly, nonatomic) IESECGoodsDetailTracker *tracker;
@property (weak, nonatomic) id<IESECGoodsDetailInfoViewEventDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentViewShouldShow:(id)a0 style:(long long)a1;
+ (double)componentViewHeight:(id)a0 style:(long long)a1;

- (void)updateWithParameters:(id)a0;
- (id)initWithParameters:(id)a0 style:(long long)a1 tracker:(id)a2;
- (void).cxx_destruct;

@end
