@class NSString, ACCStickerContainerView;

@interface ACCStickerDisplayManager : NSObject <ACCStickerDisplayManagerProtocol>

@property (weak, nonatomic) ACCStickerContainerView *stickerContainer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetContainerRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetPlayerFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentViewForModel:(id)a0;
+ (void)displayStickerContentView:(id)a0 config:(id)a1 model:(id)a2 inContainer:(id)a3;
+ (id)p_locationModelFromInteractionInfo:(id)a0;
+ (void)displayStickerContentView:(id)a0 config:(id)a1 model:(id)a2 inContainer:(id)a3 stikerSize:(struct CGSize { double x0; double x1; })a4;
+ (void)trackForOriginalPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 currentPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 params:(id)a2;

- (void)displayWithModels:(id)a0;
- (id)initWithStickerContainer:(id)a0;
- (void).cxx_destruct;

@end
