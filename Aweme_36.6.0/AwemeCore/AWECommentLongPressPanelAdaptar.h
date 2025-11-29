@interface AWECommentLongPressPanelAdaptar : NSObject <AWECommentLongPressPanelProtocol>

@property (nonatomic, retain) id containerDelegate;

- (void)showLongPressPanelWithParam:(id)a0 config:(id)a1 showSheetCompletion:(id /* block */)a2 dismissSheetCompletion:(id /* block */)a3;
- (id)containerSheet;
- (void)dismissLongPressPanel:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
