@class NSString;

@interface AWEIMNormalImageContentComponent : AWEIMFlexComponent <AWEIMImageContentInterface, AWEIMMessageContentInterface>

@property (nonatomic) long long vmState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)onCellWillRenderForCurrentComponent;
- (void)trackOpenPlatformEvent:(id)a0;
- (void)trackWithEventName:(id)a0;
- (void)p_bindToVM;
- (BOOL)p_needResizeImage:(struct CGSize { double x0; double x1; })a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (void)didTapCoverAction;
- (id)contentMD5;
- (void)configMessage;
- (id)specializedViewModel;
- (void)trackCellClickForOpenPlatform;
- (void)reloadImageFromVM;
- (struct CGSize { double x0; double x1; })p_sizeForReduceResolution;
- (void)p_clipAndShowImage:(id)a0;
- (void)p_clipAndShowImage:(id)a0 thenCache:(BOOL)a1;
- (BOOL)isImageUnavailable;
- (id)p_clippedImageWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 corners:(unsigned long long)a2;
- (void)trackWillDisplayCellForOpenPlatform;
- (id)displayMessage;
- (id)displayImage;

@end
