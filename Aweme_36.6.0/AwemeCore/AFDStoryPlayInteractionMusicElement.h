@class UIImageView, UILabel, UIView;
@protocol AWEPlayInteractionMusicElementViewModelProtocol;

@interface AFDStoryPlayInteractionMusicElement : AWEPlayInteractionBaseElement

@property (retain, nonatomic) id<AWEPlayInteractionMusicElementViewModelProtocol> viewModel;
@property (retain, nonatomic) UIImageView *musicIcon;
@property (retain, nonatomic) UILabel *musicNameLabel;
@property (retain, nonatomic) UIView *musicContent;

+ (BOOL)enableStory25MusicElementWithModel:(id)a0 context:(id)a1;
+ (BOOL)shouldActivateWithData:(id)a0 context:(id)a1;

- (void)onMusicButtonClicked:(id)a0;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (BOOL)musicTrackAlertIfNotValid;
- (double)musicViewTopOffset;
- (double)musicViewBottomOffset;
- (void)updateLayout;
- (void).cxx_destruct;
- (unsigned long long)elementType;
- (void)viewDidLoad;
- (id)context;
- (unsigned long long)elementPosition;

@end
