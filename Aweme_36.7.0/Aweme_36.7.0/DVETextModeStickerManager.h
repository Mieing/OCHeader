@class NSMutableDictionary, DVEStickerDeleteView, DVEVCContextServiceContainer, DVEStoryFontManager, UIView;
@protocol DVEVCContextExternalInjectProtocol, DVELoggerProtocol, IESServiceProvider;

@interface DVETextModeStickerManager : NSObject

@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) DVEVCContextServiceContainer *container;
@property (retain, nonatomic) id<DVELoggerProtocol> trackLogger;
@property (retain, nonatomic) id<DVEVCContextExternalInjectProtocol> externServiceInject;
@property (retain, nonatomic) DVEStoryFontManager *fontManager;
@property (copy, nonatomic) NSMutableDictionary *textViewCache;
@property (nonatomic) BOOL preCanDelete;
@property (nonatomic) BOOL isStickerViewPanning;
@property (nonatomic) BOOL isStickerViewEnterEdit;
@property (nonatomic) BOOL allowEditSecond;
@property (weak, nonatomic) UIView *parentEditView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DVEStickerDeleteView *trashButton;
@property (copy, nonatomic) id /* block */ deleteTextStickerViewBlock;
@property (copy, nonatomic) id /* block */ bgColorFromExternalBlock;
@property (copy, nonatomic) id /* block */ changeBgColorForCanvasBlock;
@property (nonatomic) BOOL isLargeCaptureRatio;
@property (nonatomic) BOOL isContainFontLibrary;

- (id)stickerFonts;
- (void)prefetchFontEffects;
- (void)updateTextStickersWithModels:(id)a0;
- (id)defaultTextInfo;
- (id)initWithServiceInject:(id)a0 fontPanel:(id)a1;
- (id)convertWholeTextStickerSlotWithImageToPathHandler:(id /* block */)a0;
- (void)bindServiceInject:(id)a0;
- (void)p_addActionBlockForTextSticker:(id)a0;
- (void)p_setImpactAction;
- (void)trackTextDeleteEvent;
- (void)p_showTextEidtViewForEditView:(id)a0;
- (void)trackTextZoomTextEvent:(id)a0;
- (id)getTextStickerImage;
- (id)saveImageToTempDirectory;
- (id)convertWholeTextStickerSlot;
- (id)p_storyTextAlignmentToString:(long long)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
