@interface WXTalkieComponent : NSObject

@property (nonatomic) struct WXTalkieEngineAdapter { void /* function */ **x0; } *engineAdapter;
@property (nonatomic) struct ILiveConEngine { struct LiveConEngine *x0; } *wxTalkEngine;

- (id)init;
- (void)dealloc;

@end
