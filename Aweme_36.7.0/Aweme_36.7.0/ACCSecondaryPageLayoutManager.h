@class AWEVideoPublishViewModel, NSString, ACCSecondaryPageComponentManager, UIView, NSValue, UIViewController;
@protocol ACCSecondaryPageViewController, ACCSecondaryPageInputData, IESServiceProvider, ACCSequenceEditServiceProtocol, ACCSecondaryPageService, ACCStickerServiceProtocol;

@interface ACCSecondaryPageLayoutManager : NSObject <ACCSecondaryPageLayoutManager>

@property (weak, nonatomic) id<IESServiceProvider> context;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) ACCSecondaryPageComponentManager *componentManager;
@property (weak, nonatomic) UIViewController<ACCSecondaryPageViewController> *rootContainer;
@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UIView *previewContainer;
@property (retain, nonatomic) UIView *bottomContainer;
@property (retain, nonatomic) UIView *previewEditorContainer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originPlayerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originBigMediaFrame;
@property (nonatomic) double originBigMediaCornerRadius;
@property (retain, nonatomic) NSValue *targetSizeForMaxContent;
@property (retain, nonatomic) NSValue *previewFrameValue;
@property (nonatomic) BOOL isBottomContainerHeightManuallySeted;
@property (retain, nonatomic) id<ACCSecondaryPageInputData> inputData;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCSecondaryPageService> secondaryPageService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly, nonatomic) UIView *aekPlayer;
@property (nonatomic) double topContainerHeight;
@property (nonatomic) double bottomContainerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0 publishModel:(id)a1;
- (void)buildHierarchy;
- (void)refreshViewLayout;
- (void)refreshBottomViewLayout;
- (double)bottomViewOffSetBottom;
- (void)manualSetBottomContainerViewHeight:(double)a0;
- (BOOL)canRelayoutPlayerForPreviewMaximumContent;
- (void)relayoutPlayerForPreviewMaximumContent;
- (void)relayoutPlayerForPreviewWholePlayer;
- (void)relayoutPlayerWithContentRatio:(double)a0;
- (void)relayoutPlayerForAIMateEditWithContentRatio:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignCenterInPixleWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)render;

@end
