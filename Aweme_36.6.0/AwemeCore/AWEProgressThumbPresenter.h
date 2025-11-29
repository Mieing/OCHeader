@class AWEProgressThumbView, NSString, AWEPageContext, UIImage, AWEProgressUIConfig;
@protocol AWEProgressContextProtocol;

@interface AWEProgressThumbPresenter : NSObject <AWEProgressStatusProtocol, AWEProgressChangeProtocol>

@property (weak, nonatomic) AWEProgressThumbView *thumbView;
@property (retain, nonatomic) AWEPageContext<AWEProgressContextProtocol> *context;
@property (retain, nonatomic) AWEProgressUIConfig *config;
@property (nonatomic) unsigned long long currentStatus;
@property (nonatomic) double currentProcess;
@property (nonatomic) BOOL requestBigThumb;
@property (retain, nonatomic) UIImage *engineBigImage;
@property (nonatomic) BOOL isPreviewEnlarged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterFrom;
- (BOOL)useCommonThumbnailLogic;
- (void)refreshPreviewImageWithBigImage:(id)a0;
- (void)getVideoPreviewImageIndex:(long long)a0 completion:(id /* block */)a1;
- (void)refreshPreviewImage;
- (void)progressValueChangedTo:(double)a0 animated:(BOOL)a1;
- (void)showPreviewByCommonLogicIfNeeded;
- (void)showPreviewIfNeeded;
- (void)loadPreviewWhenShow:(BOOL)a0 completion:(id /* block */)a1;
- (void)changeProgressStatusTo:(unsigned long long)a0 withAction:(unsigned long long)a1 animate:(BOOL)a2;
- (id)initWithTargeView:(id)a0 UIConfig:(id)a1 context:(id)a2;
- (void)configThumbView;
- (id)currentThumbUIConfig;
- (id)framePreviewImageForProgress:(double)a0 originalImage:(id)a1;
- (void).cxx_destruct;
- (void)reset;

@end
