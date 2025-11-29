@interface AWPOIGoodsDitoLynxComponentViewModel : DitoLynxComponentViewModel

@property (nonatomic) BOOL showReported;

- (void)componentViewWillShow;
- (BOOL)needNestedScroll;
- (void)sendEventToLynxView;

@end
