@class ACCCameraSubscription, AWEImageAndTitleBubble, RACSignal, RACBehaviorSubject, UIView, AWEVideoPublishViewModel, NSString;

@interface ACCVideoEditTipsServiceImpl : NSObject <ACCVideoEditTipsService>

@property (retain, nonatomic) UIView *functionBubble;
@property (retain, nonatomic) AWEImageAndTitleBubble *imageTitleBubble;
@property (retain, nonatomic) RACSignal *showSideslipPropGuideSignal;
@property (retain, nonatomic) RACBehaviorSubject *showSideslipPropGuideSubject;
@property (retain, nonatomic) RACSignal *showMusicBubbleSignal;
@property (retain, nonatomic) RACBehaviorSubject *showMusicBubbleSubject;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) long long showedValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDarkBackGround;
- (void)showFunctionBubbleWithContent:(id)a0 forView:(id)a1 containerView:(id)a2 mediaView:(id)a3 anchorAdjustment:(struct CGPoint { double x0; double x1; })a4 inDirection:(unsigned long long)a5 functionType:(long long)a6;
- (void)showImageBubble:(id)a0 forView:(id)a1 containerView:(id)a2 mediaView:(id)a3 inDirection:(long long)a4 subtitle:(id)a5 functionType:(long long)a6;
- (void)dismissFunctionBubbles;
- (void)saveShowedFunctionsByType:(long long)a0;
- (void)sendShowSideslipPropGuideSignal;
- (void)sendShowMusicBubbleSignalByType:(long long)a0;
- (void)didTappedFunctionBubble;
- (void)didTappedImageTitleBubble;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addSubscriber:(id)a0;

@end
