@class NSString;

@interface MMDarkModeObserver : NSObject <WCMainWindowExt>

@property (copy, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)observerWithCallback:(id /* block */)a0;

- (id)init;
- (void)mm_traitCollectionDidChange:(id)a0;
- (void)fireDarkModeChange:(BOOL)a0;
- (void)forceFireEvent;
- (void).cxx_destruct;

@end
