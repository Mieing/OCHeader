@class CKGenericTemplateModel, UIView, UIImage, NSString, UIImageView, NSDictionary, UIButton, UIViewController, UILabel;

@interface AWEUserAvatarEditViewController : TOCropViewController <TOCropViewControllerDelegate>

@property (retain, nonatomic) UIButton *checkBoxButton;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isTapPushEditing;
@property (retain, nonatomic) UIImage *userAvatar;
@property (nonatomic) double tapRecodTime;
@property (nonatomic) BOOL isAppeared;
@property (nonatomic) double trackDuration;
@property (nonatomic) BOOL landingAfterPublish;
@property (retain, nonatomic) UIView *leftContainer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) UIButton *doneAndPostButton;
@property (retain, nonatomic) UILabel *previewLabel;
@property (retain, nonatomic) UIImageView *previewArrowView;
@property (retain, nonatomic) UIView *previewContainerView;
@property (retain, nonatomic) UIView *switchPostStoryContainerView;
@property (retain, nonatomic) UIImageView *switchPostStoryCheckBoxView;
@property (retain, nonatomic) UILabel *switchPostStoryTitleLabel;
@property (nonatomic) BOOL isSwitchPostStoryStatus;
@property (retain, nonatomic) CKGenericTemplateModel *storyTemplateModel;
@property (nonatomic) double postAvatarStartDuration;
@property (nonatomic) double postAvatarEndDuration;
@property (retain, nonatomic) UIImage *noStickerImage;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) UIView *sourceView;
@property (copy, nonatomic) id /* block */ preAvatarSaveBlock;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (weak, nonatomic) UIViewController *dismissViewController;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL needOptimizeDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_publishEnabled;

- (void)cropViewController:(id)a0 didCropToImage:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 angle:(long long)a3 button:(id)a4;
- (void)cropViewController:(id)a0 didFinishCancelled:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCropViewWithVerticalLayout:(BOOL)a0;
- (void)p_dismissWithCompletion:(id /* block */)a0;
- (void)configABTest;
- (void)pushToRecordEditing;
- (void)prefetchEffects;
- (void)layoutStoryPublishView:(double)a0;
- (void)storyAvatarIfNeeded;
- (void)applyAvatarAction;
- (void)checkBoxTapped:(id)a0;
- (void)trackSaveProfilePhoto:(id)a0 isFirstReplace:(id)a1 toStatus:(id)a2 extraInfo:(id)a3;
- (id)trackReferString;
- (void)handleSelectedWithAssetModels:(id)a0 isDirect:(BOOL)a1 originImage:(id)a2 avatarUrl:(id)a3;
- (void)silencePublish;
- (void)silencePublishWithPhoto:(id)a0;
- (void)enterTemplatePreview;
- (void)clickCancelAction;
- (void)clickDoneAction;
- (void)clickPreviewContainerViewAction;
- (void)clickSwitchPostStoryContainerViewAction;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setupUI;

@end
