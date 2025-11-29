@class NSString, WeNoteNativeHelperCallback;

@interface WeNoteNativeHelper : NSObject <WeNoteNativeHelperBase> {
    WeNoteNativeHelperCallback *m_callBack;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCallback:(id)a0;
- (void)openLocationItemAsync:(unsigned long long)a0 lng:(double)a1 lat:(double)a2 scale:(double)a3 label:(id)a4 poiName:(id)a5 poiId:(id)a6;
- (void)playVoiceAsync:(unsigned long long)a0 req:(id)a1;
- (void)pauseVoiceAsync:(unsigned long long)a0 playId:(id)a1 path:(id)a2;
- (void)releaseAudioPlayerAsync:(unsigned long long)a0;
- (void)openMediaAssetGalleryPageAsync:(unsigned long long)a0 mediaAssets:(id)a1 showIndex:(int)a2;
- (void)openWebpageAsync:(unsigned long long)a0 brandId:(id)a1 url:(id)a2;
- (void)openFileAsync:(unsigned long long)a0 localId:(int)a1 dataId:(id)a2 title:(id)a3 filePath:(id)a4 totalSize:(int)a5 ext:(id)a6 msgFileDownReq:(id)a7;
- (void)openPhotoSelectorAsync:(unsigned long long)a0 params:(id)a1;
- (void)takePhotoAsync:(unsigned long long)a0 canTakeImg:(BOOL)a1 canTakeVideo:(BOOL)a2;
- (void)openFileSelectorAsync:(unsigned long long)a0 maxCount:(int)a1;
- (void)openLocationSelectorAsync:(unsigned long long)a0;
- (void)forwardToConversationAsync:(unsigned long long)a0 req:(id)a1;
- (void).cxx_destruct;

@end
