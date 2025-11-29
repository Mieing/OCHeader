@class NSString, AWEIMMixImageMessageViewModel;

@interface AWEIMMixImageContentComponent : AWEIMFlexComponent <AWEIMImageContentInterface, AWEIMMessageContentInterface>

@property (readonly, weak, nonatomic) AWEIMMixImageMessageViewModel *specializedViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (void)p_trackIMMessageClick:(id)a0 context:(id)a1;
+ (void)p_hideKeyboard:(id)a0;
+ (id)p_presentMixImageDetail:(id)a0 displayMessage:(id)a1;
+ (void)p_transferToStartMixPage:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)onCellWillRenderForCurrentComponent;
- (void)p_refreshData;
- (void)p_bindVM;
- (void)reloadImage;
- (void)p_updateImage:(id)a0;
- (BOOL)p_needResizeImage:(struct CGSize { double x0; double x1; })a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (void)showMediaDetail;
- (void)p_didTapDownloadAction;
- (void)didTapCoverAction;
- (void)p_didFinishSetImage:(id)a0;
- (id)contentMD5;
- (void)p_clipAndShowImage:(id)a0;
- (void)p_clipAndShowImage:(id)a0 thenCache:(BOOL)a1;
- (void)configPropsWithMessage;
- (void)updatePropsWithMessage;
- (void)p_trackIMMessageShow;
- (id)p_descText;
- (void)p_reloadAvatars;
- (id)p_clippedImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 corners:(unsigned long long)a2;
- (id)p_defaultErrorImage;
- (void)p_configContentPropsDelayCoverHide:(BOOL)a0;
- (id)p_presentMixImageDetail;
- (id)displayMessage;
- (id)displayImage;

@end
