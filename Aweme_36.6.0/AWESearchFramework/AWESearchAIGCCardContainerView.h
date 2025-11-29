@class AWESearchAutoPlayHandler, NSString, CAShapeLayer, UILabel, UIView, UITapGestureRecognizer;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchAIGCCardContainerView : UIView <AWESearchAIGCShareProtocol, AWESearchAIGCAutoPlayCardProtocol>

@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UILabel *debugLabel;
@property (retain, nonatomic) UIView *errorView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (nonatomic) unsigned long long cardCornerType;
@property (nonatomic) BOOL inMixCard;
@property (nonatomic) BOOL banColoredBorder;
@property (nonatomic) double cardMargin;
@property (retain, nonatomic) id bridgeComponent;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) AWESearchAutoPlayHandler *autoPlayHandler;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (BOOL)shareEnable;
- (BOOL)shouldNotActive;
- (BOOL)isMediaSourceCard;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)lynxEngine;
- (BOOL)debugModel;
- (id)shareSearchID;
- (void)shareBegin;
- (void)shareEnd;
- (void)shareDidSelected;
- (void)shareCancelSelected;
- (void)createUIWithViewDelegate:(id)a0 viewModel:(id)a1;
- (void)handleShareBegin:(id)a0;
- (void)handleShareEnd;
- (void)handleShareDidSelected:(id)a0;
- (void)handleShareCancelSelected:(id)a0;
- (void)handleAIGCResultHasReceiveAllData:(id)a0;
- (BOOL)enableCreateUILayoutIfNeeded;
- (void)handleCornerAndBackgroundWithViewModel:(id)a0;
- (void)clearShareUIStatus;
- (id)sharePublishCoverViewModel;
- (BOOL)fectchIsDisablePublish;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewDelegate:(id)a1 viewModel:(id)a2;
- (id)getContentCardView;
- (void)redrawCornerAndBackground;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (BOOL)hasVideo;
- (void)didResignActive;
- (void)layoutSubviews;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)activeView;
- (void)showError;
- (void)tapAction;

@end
