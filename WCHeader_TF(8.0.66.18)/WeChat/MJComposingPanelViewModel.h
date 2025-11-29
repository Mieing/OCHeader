@interface MJComposingPanelViewModel : NSObject

@property (readonly, nonatomic) unsigned long long panelType;
@property (readonly, nonatomic) BOOL respondsToQuickExit;

- (id)initWithPanelType:(unsigned long long)a0 respondsToQuickExit:(BOOL)a1;
- (id)description;
- (void)handleApplicationDidEnterBackground:(id)a0;
- (void)handleApplicationWillEnterForeground:(id)a0;

@end
