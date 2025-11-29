@class IESECSKUFloatBannerModel, UIView;
@protocol IESECSKUFloatBannerViewItemDelegate;

@interface IESECSKUFloatBannerItemView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) IESECSKUFloatBannerModel *floatBannerModel;
@property (weak, nonatomic) id<IESECSKUFloatBannerViewItemDelegate> delegate;

- (void)configUI;
- (id)initWithModel:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;

@end
