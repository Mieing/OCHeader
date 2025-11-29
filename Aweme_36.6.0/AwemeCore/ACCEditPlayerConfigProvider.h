@class NSString, AWEVideoPublishViewModel;
@protocol ACCEditPlayerStickerProtocol, ACCEditPlayerFrameProtocol, ACCEditPlayerCanvasProtocol;

@interface ACCEditPlayerConfigProvider : NSObject <ACCEditPlayerFrameProtocol, ACCEditPlayerStickerProtocol, ACCEditPlayerCanvasProtocol, ACCEditPlayerConfigProviderProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly, nonatomic) BOOL useRefactor;
@property (readonly, nonatomic) BOOL enableLayoutManager;
@property (readonly, nonatomic) id<ACCEditPlayerFrameProtocol> frame;
@property (readonly, nonatomic) id<ACCEditPlayerCanvasProtocol> canvas;
@property (readonly, nonatomic) id<ACCEditPlayerStickerProtocol> sticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getFullDisplayFrameAndUpdateIfNeeded:(id)a0;
+ (id)buildWithPublishModel:(id)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editPlayerFrame;
- (id)initWithPublishModel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalPlayerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })standPlayerFrame;
- (BOOL)needMask;
- (Class)configClass;
- (id)editRuleList;
- (id)publishRuleList;
- (BOOL)needAdaptionScreen;
- (BOOL)noteStyleSafeArea;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalPlayerFrameWithEditPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realStickerPlayerFrame;
- (void).cxx_destruct;
- (id)configName;

@end
