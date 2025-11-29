@interface AWEFormatLiveScriptEditService : HTSService <AWEFormatLiveScriptEditServiceInterface> {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ initialData;
    void /* unknown type, empty encoding */ chapterIndex;
    void /* unknown type, empty encoding */ isModified;
    void /* unknown type, empty encoding */ uploadTimer;
    void /* unknown type, empty encoding */ uploadTime;
    void /* unknown type, empty encoding */ uploadTimeLimit;
    void /* unknown type, empty encoding */ isUploadingVideo;
    void /* unknown type, empty encoding */ isUploadingImage;
    void /* unknown type, empty encoding */ videoUploadToken;
    void /* unknown type, empty encoding */ imageUploadToken;
    void /* unknown type, empty encoding */ videoUploadOperation;
    void /* unknown type, empty encoding */ imageUploadOperationList;
    void /* unknown type, empty encoding */ isCancelUpload;
    void /* unknown type, empty encoding */ audioPlayer;
    void /* unknown type, empty encoding */ isPlayingAudio;
    void /* unknown type, empty encoding */ avatarUid;
    void /* unknown type, empty encoding */ avatarCid;
    void /* unknown type, empty encoding */ playId;
    void /* unknown type, empty encoding */ trackBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_musicPanel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundSelectPanelList;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundSelectViewModelList;
    void /* unknown type, empty encoding */ $__lazy_storage_$_openVideoSelectPanel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_openVideoSelectViewModel;
}

- (void)cancelUploadIfNeed;
- (void)confirmScriptEditWithEditParams:(id)a0 scriptId:(id)a1 completion:(id /* block */)a2;
- (void)scriptBriefGenerateWithAvatarUid:(id)a0 avatarCid:(id)a1 playId:(id)a2 trackBlock:(id /* block */)a3;
- (void)involveScriptEditWithParams:(id)a0;
- (id)getScriptEditTrackParams:(id)a0;
- (void)restoreBackgroundMusic;
- (void)pauseBackgroundMusic;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
