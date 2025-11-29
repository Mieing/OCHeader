@class AWESearchAIGCImageSelectionContainer, NSString, UIImageView, AWESearchAIGCImageContext, AWESearchAIGCBubbleModel;
@protocol AWESearchAIGCChatImageContainerDelegate;

@interface AWESearchAIGCChatImageContainer : UIImageView <AWESearchAIGCImageDisplayerDelegate>

@property (retain, nonatomic) AWESearchAIGCImageContext *imageContext;
@property (retain, nonatomic) AWESearchAIGCBubbleModel *bindModel;
@property (retain, nonatomic) UIImageView *virtualSelectionContainer;
@property (retain, nonatomic) AWESearchAIGCImageSelectionContainer *selectionContainer;
@property (weak, nonatomic) id<AWESearchAIGCChatImageContainerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calculateContainerSizeWithModel:(id)a0;
+ (id)rotatePlaceholderImage;
+ (id)failPlaceholderImage;
+ (struct CGSize { double x0; double x1; })calculateContainerSizeWithImage:(id)a0;
+ (struct CGSize { double x0; double x1; })calculateContainerSizeWithImageSize:(struct CGSize { double x0; double x1; })a0;
+ (id)loadingPlaceholderImage;

- (void)addGesture;
- (void)reloadContainerWithModel:(id)a0;
- (void)setupVirtualSelectionContainer;
- (void)reloadVirtualSelectionContainer;
- (void)imageContainerTap:(id)a0;
- (void)trackImageContainerTap;
- (void)reloadSelectionContainer;
- (void)anchorVirtualSelectionContainer;
- (void)showBoxArrayAnimationWithCompletion:(id /* block */)a0;
- (void)showRotatePlaceholderImageAnimationWithCompletion:(id /* block */)a0;
- (void)updateSelectionContainerSelectedIndex;
- (void)trackSelectionContainerClick;
- (void)displayerDidPop:(id)a0;
- (void)displayerWillPop:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
