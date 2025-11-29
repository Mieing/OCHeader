@class NSString;

@interface AWEPadUIApdater : HTSService <AWEPadUIApdater>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performPadAction:(id /* block */)a0;
- (void)performPadUILayoutUpdate:(id /* block */)a0;
- (BOOL)performOptimizeAwemeDetailTableReload:(id /* block */)a0;
- (void)performPlayInteractionProgressSliderLayout:(id /* block */)a0;
- (void)performPlayInteractionRichProgressSliderLayout:(id /* block */)a0;
- (void)performPlayInteractionBottomBarLayout:(id /* block */)a0;
- (BOOL)enable;

@end
