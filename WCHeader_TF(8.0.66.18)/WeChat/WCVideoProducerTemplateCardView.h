@class NSString, UIImageView, WCProgressMaskView, UILabel, UIView, WCVideoProducerTemplateCellViewModel;

@interface WCVideoProducerTemplateCardView : UICollectionViewCell <WCMVVMViewComponent>

@property (retain, nonatomic) UIView *templateCardContainerView;
@property (retain, nonatomic) UILabel *templateNameLabel;
@property (retain, nonatomic) UIImageView *templateCardImageView;
@property (retain, nonatomic) UIView *launchMJAppTipsCardView;
@property (retain, nonatomic) UIView *selectedMaskView;
@property (retain, nonatomic) WCProgressMaskView *progressMaskView;
@property (retain, nonatomic) NSString *loadedAnimFilePath;
@property (nonatomic) BOOL isAnimPlaying;
@property (retain, nonatomic) WCVideoProducerTemplateCellViewModel *cellVM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;
+ (id)headerIdentifier;
+ (double)maxNameLabelHeight;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadView;
- (void)startPlayingDemo;
- (void)stopPlayingDemo;
- (void)_initView;
- (void)_initLaunchMJAppTipsCardViewIfNeeded;
- (void)_loadTemplateCardImage;
- (void)_loadTemplateNameLabel;
- (void)_updateTemplateNameLabelAccessibility;
- (void)_loadPreviewAnimAndPlay:(BOOL)a0;
- (void)_loadPreviewAnimFromLocalFilePath:(id)a0 andPlay:(BOOL)a1;
- (void)_startPreviewAnimWithDecoder:(id)a0;
- (void)_stopPreviewAnim;
- (void)_resetPreviewDefaultImage;
- (void)didChangeViewModel:(id)a0 fromOldObject:(id)a1 toNewObject:(id)a2;
- (void)viewModel:(id)a0 didChangeProperty:(id)a1 fromOldValue:(id)a2 toNewValue:(id)a3;
- (id)observingPropertyKeyPathsForViewModel;
- (void)updateSubviewForPropertyKeyPath:(id)a0;
- (void).cxx_destruct;

@end
