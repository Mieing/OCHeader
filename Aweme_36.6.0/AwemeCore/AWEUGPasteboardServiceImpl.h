@class NSString;

@interface AWEUGPasteboardServiceImpl : HTSService <AWEUGPasteboardService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getPasteboardContentWithSceneType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)pasteboardUsefulWithSceneType:(unsigned long long)a0;
- (void)clearPasteboard;

@end
