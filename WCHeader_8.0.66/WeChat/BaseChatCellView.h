@class BaseChatViewModel, NSString;
@protocol MessageNodeViewDelegate;

@interface BaseChatCellView : UIView <MessageComponentMultiSceneSupport> {
    struct CGSize { double width; double height; } m_layoutSize;
}

@property (readonly, nonatomic) BaseChatViewModel *viewModel;
@property (weak, nonatomic) id<MessageNodeViewDelegate> delegate;
@property (nonatomic) BOOL isLayouting;
@property (nonatomic) BOOL useLightStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)setViewModel:(id)a0;
- (void)prepareForReuse;
- (BOOL)canBeReused;
- (BOOL)shouldLayoutIfNeeded;
- (void)resetLayoutCache;
- (void)layoutSubviews;
- (void)layoutInternal;
- (BOOL)isUseLightStyle;
- (BOOL)needUpdateLightStyle;
- (BOOL)userInteractionEnabledWhenEditing;
- (void)layoutFinished;
- (void)onAppear;
- (void)onDisappear;
- (void)onWillBeginDragging;
- (BOOL)disableImplicitAnimations;
- (BOOL)isShowInSubScene;
- (id)getCurrViewController;
- (double)chatViewControllerWidth;
- (double)chatViewControllerShortSideLength;
- (void).cxx_destruct;

@end
