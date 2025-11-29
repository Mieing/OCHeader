@interface IESLLPOIGoodsDitoLynxComponentViewModel : LLDitoLynxComponentViewModel

@property (nonatomic) BOOL showReported;

- (void)componentViewWillShow;
- (BOOL)needNestedScroll;
- (void)sendEventToLynxView;
- (BOOL)judgeShouldSendScrollEvent:(id)a0 hasSetFrequency:(BOOL)a1;

@end
