@class UIView, NSUserDefaults, NSArray, AWEVideoPublishViewModel, NSString, ACCQuickFlashStickerModernToolBar, ACCQuickFlashStickerEditToolbar, AWEEditGradientView, ACCAnimatedButton;
@protocol ACCQuickFlashStickerViewUIProtocol, ACCQuickFlashStickerEditViewDelegate;

@interface ACCQuickFlashStickerEditView : UIView <ACCQuickFlashStickerModernToolBarDelegate>

@property (retain, nonatomic) ACCAnimatedButton *cancelButton;
@property (retain, nonatomic) ACCAnimatedButton *saveButton;
@property (retain, nonatomic) ACCAnimatedButton *textReadButton;
@property (retain, nonatomic) AWEEditGradientView *upperMaskView;
@property (retain, nonatomic) UIView *lowerMaskView;
@property (weak, nonatomic) UIView *orignalSuperView;
@property (nonatomic) BOOL useModernToolBar;
@property (retain, nonatomic) ACCQuickFlashStickerEditToolbar *editToolbar;
@property (retain, nonatomic) ACCQuickFlashStickerModernToolBar *recommendBar;
@property (retain, nonatomic) UIView<ACCQuickFlashStickerViewUIProtocol> *editingStickerView;
@property (nonatomic) BOOL isEdting;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) NSArray *suggestTitleList;
@property (retain, nonatomic) NSArray *forceInsertTitleList;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (copy, nonatomic) NSString *currentKeyWord;
@property (nonatomic) BOOL isUseSug;
@property (nonatomic) BOOL isRequestOnAir;
@property (copy, nonatomic) NSString *textBeforeEdit;
@property (nonatomic) BOOL isAddSticker;
@property (nonatomic) BOOL isRecord;
@property (nonatomic) BOOL saveButtonEnable;
@property (nonatomic) BOOL fromTextSticker;
@property (nonatomic) BOOL isRedPackSticker;
@property (weak, nonatomic) id<ACCQuickFlashStickerEditViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ onEditFinishedBlock;
@property (copy, nonatomic) id /* block */ onExitEditBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)editViewWithPublishModel:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 publishModel:(id)a1;
- (void)fetchSuggestTitleList;
- (void)applyLittleInspirationWithClick:(BOOL)a0;
- (void)saveCacheToLocal;
- (void)removeFirstTitleForModel:(id)a0;
- (void)fetchFlashHotTopics:(id)a0 indexPath:(id)a1 scrollPosition:(unsigned long long)a2 InsertFirstKeyWoard:(id)a3;
- (void)trackInfoWithTittle:(id)a0;
- (id)localSuggestTitleStoreKey:(BOOL)a0;
- (void)stopEditWithEventType:(unsigned long long)a0;
- (BOOL)shouldSupportTextRead;
- (void)didClickedMaskView;
- (void)didClickedCancelButton;
- (void)didClickedSaveButton;
- (void)didClickedTextReadButton;
- (void)modernToolBar:(id)a0 selectAtIndex:(id)a1 itemModel:(id)a2 scrollPosition:(unsigned long long)a3;
- (void)trackRecommendInfoWithEvent:(id)a0 trackInfo:(id)a1;
- (void)updateRecommendBarWithTitle:(id)a0 insertToFirst:(id)a1;
- (void)hideTopUI:(BOOL)a0;
- (void)startEditStickerView:(id)a0 selectedUserIdList:(id)a1 didSelectUserBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)refreshTextReadButtonWithState:(long long)a0;
- (void).cxx_destruct;
- (void)setup;

@end
