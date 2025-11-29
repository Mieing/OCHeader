@class AWEVideoPublishViewModel;

@interface AWEPublishAlbumManager : NSObject

@property (nonatomic) BOOL currentState;
@property (weak, nonatomic) AWEVideoPublishViewModel *model;

+ (BOOL)businessEnableSaveWithModel:(id)a0;
+ (BOOL)defaultStateForModel:(id)a0;
+ (BOOL)shouldShowSaveAlbumItemForModel:(id)a0;
+ (BOOL)systemEnable;
+ (BOOL)buttonStateForModel:(id)a0;
+ (BOOL)albumStateForModel:(id)a0;
+ (void)setButtonStateForModel:(id)a0;
+ (void)setAlbumState:(BOOL)a0 forModel:(id)a1;
+ (void)showPhotoLibraryPermissionAlertWithCompletion:(id /* block */)a0;

- (void)userClickButtonWithCompletion:(id /* block */)a0;
- (void)p_checkAlbumPermissionWithCompletion:(id /* block */)a0;
- (void)checkAlbumPermissionWithCompletion:(id /* block */)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
