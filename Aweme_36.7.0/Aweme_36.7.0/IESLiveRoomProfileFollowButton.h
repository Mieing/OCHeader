@class NSString, UIImage, IESLiveRoomProfileOperationViewModel, UIButton;

@interface IESLiveRoomProfileFollowButton : UIView <IESLiveRoomProfileButtonDelegate>

@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) IESLiveRoomProfileOperationViewModel *viewModel;
@property (retain, nonatomic) UIImage *followBgImage;
@property (nonatomic) BOOL isFollowAnim;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickButton:(id)a0;
- (void)playFollowAnimationWithCompletion:(id /* block */)a0;
- (void)loadSubViews;
- (id)buttonBgImageWithColorArray:(id)a0;
- (id)initWithViewModel:(id)a0 diContext:(id)a1;
- (void)viewDidShowOnContainer:(id)a0;
- (void)viewDidHideFromContainer:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })viewSize;

@end
