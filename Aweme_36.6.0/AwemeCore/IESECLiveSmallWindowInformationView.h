@class IESECLiveSmallWindowViewModel, IESECGCDTimer, NSString, NSMutableSet, IESECGradientView, NSMutableArray, IESECLiveRotatingView;

@interface IESECLiveSmallWindowInformationView : UIView <IESECSmallWindowDecorationViewProtocol>

@property (retain, nonatomic) IESECLiveSmallWindowViewModel *viewModel;
@property (retain, nonatomic) NSMutableSet *showedLabelsID;
@property (retain, nonatomic) NSMutableArray *labelsModel;
@property (retain, nonatomic) IESECGradientView *bottomMaskGradientView;
@property (retain, nonatomic) IESECLiveRotatingView *rotateView;
@property (retain, nonatomic) IESECGCDTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (void)setupBind;
- (void)scrollToModel:(id)a0;
- (void)trackSmallWindowClick;
- (id)nextLabelModel;
- (void)updateLabelsWithNewLabels:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)detach;
- (void)attach;

@end
