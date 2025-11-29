@class NSArray, NSDictionary, AWECommentRecorderRepliedUserModel;

@interface AWECommentMediaPickerSwiftImpl.CommentMediaPicker : NSObject <AWECommentMediaPickerProtocol> {
    void /* unknown type, empty encoding */ enablePhotoTab;
    void /* function */ defaultSelectedAssets;
    void /* function */ logDict;
    void /* unknown type, empty encoding */ albumBehaviorTracker;
    void /* unknown type, empty encoding */ extensionList;
    void /* unknown type, empty encoding */ dismissedBlock;
    void /* function */ openAlbumFinishBlock;
    void /* function */ willShowAlbumBlock;
    void /* function */ albumWillPresentBlock;
    void /* function */ pickerDidDismissByPan;
    void /* unknown type, empty encoding */ imageCompletionBlock;
    void /* unknown type, empty encoding */ videoCompletionBlock;
    void /* unknown type, empty encoding */ mixMediaCompletionBlock;
    void /* unknown type, empty encoding */ trackerInfoInject;
    void /* unknown type, empty encoding */ startTimestamp;
    void /* unknown type, empty encoding */ isAlbumDidSlide;
    void /* unknown type, empty encoding */ isAlbumDidClickAlbumSelectBtn;
    void /* unknown type, empty encoding */ isAlbumPhotoSelected;
    void /* unknown type, empty encoding */ albumCloseMethod;
    void /* unknown type, empty encoding */ albumViewController;
    void /* unknown type, empty encoding */ newAlbumViewController;
    void /* unknown type, empty encoding */ containsLongDurationLivePhoto;
    void /* unknown type, empty encoding */ $__lazy_storage_$_transitionDelegate;
    void /* unknown type, empty encoding */ enableMultiSelect;
    void /* unknown type, empty encoding */ enableSwitchMultiSelect;
    void /* unknown type, empty encoding */ enablePreview;
    void /* unknown type, empty encoding */ scrollToBottom;
    void /* unknown type, empty encoding */ columnNumber;
    void /* unknown type, empty encoding */ customBottomView;
    void /* unknown type, empty encoding */ customBottomViewForPreviewPage;
    void /* unknown type, empty encoding */ completeSelectionHandler;
    void /* unknown type, empty encoding */ shouldSelectAssetHandler;
    void /* unknown type, empty encoding */ customCellListCreator;
    void /* unknown type, empty encoding */ needFetchAssetFromICloud;
    void /* unknown type, empty encoding */ enableLivePhoto;
    void /* unknown type, empty encoding */ weakFinishContext;
}

@property (nonatomic) BOOL enableVideoTab;
@property (nonatomic) BOOL enableLiveTab;
@property (nonatomic) BOOL enableMixTab;
@property (nonatomic) BOOL enableShootPicture;
@property (nonatomic) BOOL enableScrollingIndicator;
@property (nonatomic) BOOL enableSearchBar;
@property (nonatomic) BOOL enablePhotoLiveSelectedTogether;
@property (nonatomic) unsigned long long mediaPickerScene;
@property (nonatomic, copy) NSArray *defaultSelectedAssets;
@property (nonatomic) BOOL customMaxSelectLimit;
@property (nonatomic) long long maxSelectLimit;
@property (nonatomic) unsigned long long colorMode;
@property (nonatomic, copy) NSDictionary *logDict;
@property (nonatomic, retain) AWECommentRecorderRepliedUserModel *repliedUserModel;
@property (nonatomic, copy) id /* block */ openAlbumFinishBlock;
@property (nonatomic, copy) id /* block */ willShowAlbumBlock;
@property (nonatomic, copy) id /* block */ albumWillPresentBlock;
@property (nonatomic, copy) id /* block */ pickerDidDismissByPan;
@property (nonatomic) BOOL canPublishMultiImage;
@property (nonatomic) BOOL isShootMultiImageProduct;
@property (nonatomic) BOOL presentPreviewPageOnAlbumVC;

- (void)pickMedia:(id /* block */)a0 imageCompletionBlock:(id /* block */)a1 videoCompletionBlock:(id /* block */)a2 mixMediaCompletionBlock:(id /* block */)a3 trackerInfoInject:(id /* block */)a4;
- (void)tabCheckDebugWithAlbumConfig:(id)a0;
- (void)tabConfigCheckDebugWithAlbumInputData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
