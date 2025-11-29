@class NSString, UIImageView, AWEAwemeModel, AWEUILoadingView, UIViewController;
@protocol AWEMissionDuetVideoPickerViewController, IESVideoPlayerProtocol;

@interface AWEMissionDuetVideoCell : UICollectionViewCell <IESVideoPlayerDelegate>

@property (retain, nonatomic) UIImageView *thumbnailImageView;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> player;
@property (weak, nonatomic) UIViewController<AWEMissionDuetVideoPickerViewController> *viewController;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEUILoadingView *loadingIndiator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)player:(id)a0 didChangeStallState:(long long)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetPlayer;

@end
