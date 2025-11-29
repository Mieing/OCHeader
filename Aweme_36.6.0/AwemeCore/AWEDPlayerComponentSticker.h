@class NSString, MediaDecrypter;

@interface AWEDPlayerComponentSticker : AWEDPlayerBaseComponent <AWEVideoInteractiveDataSource>

@property (retain, nonatomic) MediaDecrypter *decrypter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerDidReadyForDisplay:(id)a0;
- (id)getVideoInformation:(id)a0;
- (void)applyStickerInfo:(id)a0;
- (double)videoCurrentPlayBackTime;
- (BOOL)enableInfoCheckBeforeTap:(id)a0;
- (void)applyStickerInfoIfNeeded:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
