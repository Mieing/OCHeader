@protocol MMStoreEmotionDesignerPackSelectViewControllerDelegate;

@interface MMStoreEmotionDesignerPackSelectViewController : MMStoreEmoticonDesignerPackBaseViewController

@property (weak, nonatomic) id<MMStoreEmotionDesignerPackSelectViewControllerDelegate> delegate;

- (void)initNavBar;
- (BOOL)shouldUseRichStyle;
- (BOOL)shouldRemoveExpiredPack;
- (unsigned long long)currentDesignerEmoticonPackTapEventType;
- (void)onTapEmoticonWithItem:(id)a0;
- (void).cxx_destruct;

@end
