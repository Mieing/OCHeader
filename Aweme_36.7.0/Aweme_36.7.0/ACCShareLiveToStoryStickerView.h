@class CAGradientLayer, AWEInteractionShareLiveToStoryStickerModel, NSString, UILabel;
@protocol ACCStickerContainerProtocol;

@interface ACCShareLiveToStoryStickerView : UIView <ACCStickerContentProtocol, ACCShareLiveToStoryStickerViewProtocol, ACCShareLiveToStoryStickerViewFactory>

@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) AWEInteractionShareLiveToStoryStickerModel *stickerModel;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stickerViewWithModel:(id)a0;

- (id)copyForContext:(id)a0;
- (void)onReceiveLiveStatusNotification:(id)a0;
- (void)updateUIWithLiveStatus:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
