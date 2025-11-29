@class UIImageView, UIImage;
@protocol IESLiveWebPPlayer;

@interface IESLiveVREntranceItemView : UIView

@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *iconImageView;
@property (retain, nonatomic) UIImage *webPImage;

- (void)setUI;
- (BOOL)canStartAnimation;
- (BOOL)isWebpImage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)playAnimation;

@end
