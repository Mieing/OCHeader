@class NSString, AWELandScapeLikeButton, AWELandscapeDiggElementViewModel;

@interface AWELandscapeDiggElement : AWELandscapeInteractionBaseElement <AWELandscapeDiggElementDelegate>

@property (retain, nonatomic) AWELandScapeLikeButton *likeButton;
@property (retain, nonatomic) AWELandscapeDiggElementViewModel *viewModel;
@property (nonatomic) struct CGPoint { double x; double y; } doubleTapLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDiggCount;
- (void)announceAccessibilityMsg:(id)a0;
- (void)exitLandscapeWithCompletion:(id /* block */)a0;
- (void)handleLikeButtonTap;
- (void)playDoubleTapLikeAnimation;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
