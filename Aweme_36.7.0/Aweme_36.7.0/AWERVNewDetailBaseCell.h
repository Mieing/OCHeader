@class NSString, AWEAwemeModel, AWERVNewDetailPageContext, AWERVNewDetailPlayVideoViewController, AWERVAutoPlayHandler;

@interface AWERVNewDetailBaseCell : UICollectionViewCell <AWERVAutoPlayCardProtocol>

@property (retain, nonatomic) AWERVNewDetailPageContext *context;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWERVNewDetailPlayVideoViewController *videoController;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) AWERVAutoPlayHandler *autoPlayHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configVideoViewController:(id)a0;
- (void)makeVideoControllerLayout;
- (void)updateVideoControllerLayout;
- (void)controlViewClicked;
- (void)configWithAwemeModel:(id)a0 context:(id)a1 videoController:(id)a2 logExtraDict:(id)a3;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)prepareForReuse;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)didResignActive;
- (id)activeView;

@end
