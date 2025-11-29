@class NSString, UIImageView, AWEEditGradientView, ACCAnimatedButton;

@interface ACCEditContainerView : UIView <ACCEditContainerViewProtocol>

@property (retain, nonatomic) AWEEditGradientView *bottomGradientView;
@property (retain, nonatomic) UIImageView *playButton;
@property (copy, nonatomic) id /* block */ interactionBlock;
@property (copy, nonatomic) id /* block */ videoPlayerTappedBlock;
@property (retain, nonatomic) ACCAnimatedButton *backButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoPlayerTapped:(id)a0;
- (BOOL)displayPlayButton:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
