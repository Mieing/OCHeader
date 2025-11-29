@class NSString;
@protocol AWEIMChatCellRecommendChatInterface;

@interface AWEIMChatCellTagComponent : AWEIMChatCellComponentBase <AWEIMChatCellRecommendChatAction>

@property (weak, nonatomic) id<AWEIMChatCellRecommendChatInterface> recommendChatService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (void)recommendChatActionButtonDidShow:(BOOL)a0;
- (void).cxx_destruct;

@end
