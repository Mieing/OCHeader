@class NSString;

@interface AWESharePanelBlockExtension : NSObject <AWESharePanelExtension>

@property (copy, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)runBlock:(id /* block */)a0 onEvent:(long long)a1;

- (void)sharePanelWillAppear:(id)a0;
- (void)sharePanelDidAppear:(id)a0;
- (void)sharePanelWillDisappear:(id)a0;
- (void)sharePanelDidDisappear:(id)a0;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
