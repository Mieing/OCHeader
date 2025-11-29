@class NSMutableDictionary, UIView;

@interface WCFinderMagicAnimationLogic : NSObject <WeChat.IMagicEmojiDelegate, WeChat.IMEHandler>

@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSMutableDictionary *magicAnimationMetaDict;
@property (copy, nonatomic) id /* block */ visibleMetaFilter;

- (id)initWithContainerView:(id)a0;
- (void)preloadMagicAnimationBiz;
- (void)setupMagicAnimationBizIfNeed;
- (void)destroyMagicAnimationBiz;
- (void)emitMagicAnimationWithEmojiID:(id)a0 animStyle:(unsigned long long)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)emojiKeyWithAnimStyle:(unsigned long long)a0;
- (void)dealloc;
- (double)getMagicEmojiBackgroudParentTopInset;
- (id)getMagicEmojiViewHolder;
- (id)getMetaByID:(id)a0 needFrame:(BOOL)a1;
- (id)getMagicEmojiBackgroudParentView;
- (id)getVisibleMetaDict:(BOOL)a0;
- (void)shakeAllVisiableViews:(BOOL)a0;
- (id)onGetMetaWithID:(id)a0 needFrame:(BOOL)a1;
- (void).cxx_destruct;

@end
