@class IESECWinLiveProductOrderIconView;

@interface IESECWinOrderIconComponent : UIView <IESECLLComponent>

@property (retain, nonatomic) IESECWinLiveProductOrderIconView *orderIconView;

+ (id /* block */)orderIconWithIconSize:(struct CGSize { double x0; double x1; })a0;

- (void)updateUIWithModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
