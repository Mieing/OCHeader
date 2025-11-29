@class UIColor, NSArray, NSString, AWEVideoPublishViewModel, NSNumber, UIView;
@protocol IESServiceProvider;

@interface ACCSecondaryPageInputData : NSObject <ACCSecondaryPageInputData>

@property (weak, nonatomic) id<IESServiceProvider> context;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) NSArray *componentClasses;
@property (nonatomic) BOOL enableEagerRender;
@property (nonatomic) BOOL enableSetUpPlayer;
@property (nonatomic) BOOL enableMuted;
@property (nonatomic) BOOL shouldInnerTransition;
@property (nonatomic) unsigned long long pageScene;
@property (nonatomic) BOOL shouldAutoActiveKeyboard;
@property (retain, nonatomic) UIColor *preferredBackgroundColor;
@property (retain, nonatomic) UIColor *preferedBottomBackgroundColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } previewContainerInsets;
@property (nonatomic) BOOL previewForMaximumContent;
@property (nonatomic) BOOL ignoreStickerInBlackArea;
@property (retain, nonatomic) NSNumber *maxWidthRatioNum;
@property (nonatomic) BOOL needEditViewContainerAnimation;
@property (retain, nonatomic) UIView *capsuleView;
@property (nonatomic) long long displayMode;
@property (nonatomic) BOOL useDisplayMode;
@property (retain, nonatomic) NSNumber *preferedEditMode;
@property (retain, nonatomic) NSNumber *forEditPage;
@property (copy, nonatomic) id /* block */ fetchFPSwiftPageContextBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0 publishViewModel:(id)a1 componentTemplate:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
