@class NSString, UIImageView, UILabel, UIButton;
@protocol ACCRecordSwitchModeService, ACCRecorderViewContainer;

@interface AWEPOIUGCRecordUploadButtonComponent : ACCFeatureComponent <CAKPhotoLibraryChangeObserver>

@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) UIButton *uploadButton;
@property (retain, nonatomic) UILabel *uploadLabel;
@property (retain, nonatomic) UIImageView *photoImageView;
@property (nonatomic) BOOL hasRegisterChangeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (void)addPHPhotoLibraryObserverIfNeed;
- (void)addPHPhotoLibraryObserver;
- (BOOL)needRefreshUploadImageView;
- (void)resetPhotoImageView;
- (id)getAlbumPlaceHolder;
- (void)updateUploadImage;
- (void)loadChildViews;
- (void)refreshUploadImageView;
- (void)trackAlbumButtonShow;
- (void)setupPhotoImageLoadProcess;
- (void)jumpToPictureAlbum;
- (void)updateUploadImageIfNeeded;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)a0;
- (void)dealloc;
- (void)setupUI;

@end
