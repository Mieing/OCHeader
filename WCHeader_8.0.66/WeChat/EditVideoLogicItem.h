@class EditVideoAttr, NSString, UIImage, EditImageAttr, WCEditViewControllerUIConfig, EditVideoInitialView, MMAsset, AVAsset;
@protocol EditVideoOptionsDelegate, EditVideoLogicItemDelegate;

@interface EditVideoLogicItem : MMObject <EditVideoInitialViewDelegate> {
    EditVideoAttr *_videoAttr;
    UIImage *_thumbImage;
    MMAsset *_asset;
    EditVideoInitialView *_editVideoInitialView;
    EditImageAttr *_originImageAttr;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _videoDuration;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _editedTimeRange;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _originalTimeRange;
}

@property (nonatomic) BOOL hideVideoOriginalSound;
@property (retain, nonatomic) AVAsset *avAsset;
@property (weak, nonatomic) id<EditVideoLogicItemDelegate> delegate;
@property (weak, nonatomic) id<EditVideoOptionsDelegate> optionsDelegate;
@property (nonatomic) unsigned long long entranceType;
@property (nonatomic) unsigned long long editImageUIStyle;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) WCEditViewControllerUIConfig *uiConfig;
@property (nonatomic) BOOL isEmoticonBoardSearchEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onEditVideo:(id)a0 onView:(id)a1;
- (void)onEditVideoAtPath:(id)a0 andThumbImage:(id)a1 onView:(id)a2;
- (void)getEditedResult:(id /* block */)a0;
- (void)setEditImageToolBarHidden:(BOOL)a0;
- (id)getEditVideoAttr;
- (void)resetEditVideoAttr;
- (void)clearMusic;
- (void)hideVideoOriginalSound:(BOOL)a0;
- (void)onEditVideoFinish;
- (void)showEditVideoViewOn:(id)a0;
- (void)loadDurationComplete:(id /* block */)a0;
- (void)loopPlay;
- (void)cancelLoopPlay;
- (void)onResigned:(id)a0;
- (void)onEnterForeground:(id)a0;
- (id)currentViewController;
- (void)onCropDone:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)onCropCancel;
- (void)onSeekTime:(double)a0;
- (void)onCropTimeChange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)onChooseVideoBGMDone:(id)a0;
- (void)onOriginSoundChange:(BOOL)a0;
- (void)onClickEditVideoCancelButton;
- (id /* block */)onWillClickEditVideoDoneButton;
- (void)onClickEditVideoDoneButton;
- (void)onClickSaveEditVideoToAlbumActionSheet:(id /* block */)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })getEditedVideoTimeRange;
- (id)getVideoAttr;
- (struct CGSize { double x0; double x1; })getImageRatioSize;
- (id)getThumbImage;
- (id)getAssetUrl;
- (id)getAssetId;
- (float)getOutputTime;
- (BOOL)isExceedTimelineTimeLimit;
- (void)willMoveToWindow:(id)a0;
- (void).cxx_destruct;

@end
