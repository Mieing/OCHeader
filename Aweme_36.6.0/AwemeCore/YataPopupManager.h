@class YataRenderDispatcher, YataPopupStack, UIView, NSMutableArray;
@protocol YataInstanceInnerInterface;

@interface YataPopupManager : NSObject

@property (retain, nonatomic) YataPopupStack *popupStack;
@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;
@property (nonatomic) BOOL respondWillDismissCallback;
@property (nonatomic) BOOL respondDidShowCallback;
@property (nonatomic) BOOL respondWillShowCallback;
@property (nonatomic) BOOL respondDidDismissCallback;
@property (retain, nonatomic) NSMutableArray *popupStoredArray;
@property (weak, nonatomic) YataRenderDispatcher *renderDispatcher;
@property (weak, nonatomic) UIView *containerView;

- (id)initWithYataInstance:(id)a0 renderDispatcher:(id)a1;
- (id)popupElementNodeKeyForCode:(id)a0;
- (id)currentPopupElementNodeKeys;
- (id)stackTopElementKey;
- (void)updateWithPopupArray:(id)a0;
- (id)filterInactivePopup:(id)a0;
- (void)removeCheckWithPopupArray:(id)a0;
- (void)pushCheckWithPopupArray:(id)a0;
- (void)updatePopupArray:(id)a0;
- (id)popupViewWithRenderKey:(id)a0 position:(id)a1;
- (void).cxx_destruct;

@end
