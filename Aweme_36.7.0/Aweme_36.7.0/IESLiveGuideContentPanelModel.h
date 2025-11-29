@class NSDictionary, NSString, IESLiveGuideModel, UIImage, HTSEventContext, IESLiveGuideSubscenePickerViewConfig, ListCategoryResponse_CategoryNode;

@interface IESLiveGuideContentPanelModel : IESLiveDynamicModel

@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) NSString *roomTitle;
@property (retain, nonatomic) NSString *coverURI;
@property (readonly, nonatomic) unsigned long long liveType;
@property (retain, nonatomic) UIImage *tempFakeImage;
@property (copy, nonatomic) NSString *tempFakeTitle;
@property (nonatomic) BOOL alertTagChoose;
@property (nonatomic) BOOL alertCoverPickerView;
@property (nonatomic) BOOL componentWillAppear;
@property (nonatomic) BOOL hasCoverImage;
@property (nonatomic) BOOL enableAutoCover;
@property (readonly, nonatomic) NSString *liveTypeStr;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveGuideSubscenePickerViewConfig *subsceneConfig;
@property (nonatomic) unsigned long long selectedSubsceneIndex;
@property (retain, nonatomic) ListCategoryResponse_CategoryNode *selectedCategory;
@property (readonly, copy, nonatomic) NSDictionary *sourceParams;
@property (nonatomic) BOOL isUploadedCover;

- (BOOL)enableNewStyle;
- (id)getCurrentSelectedAudioSubSceneStr;
- (id)getSubSceneTrackStringFromPreviewView;
- (void)trackSceneClickedForPartyKTV;
- (void)setupDefaultSelectedIndex;
- (BOOL)enablePicker;
- (id)getModeListIndexArray;
- (BOOL)configEnableWithScene:(unsigned long long)a0;
- (BOOL)enableKTVMode;
- (BOOL)isPartyKTVScene;
- (void)trackSceneShowForPartyKTV;
- (unsigned long long)getSubsceneByIndex:(unsigned long long)a0;
- (void)setupSubscenePickerConfig;
- (BOOL)mediaLiveShouldShowWarning;
- (void)showTitleWarningWithLength:(unsigned long long)a0;
- (id)getSubsceneTrackString;
- (BOOL)shouldHideContentView;
- (BOOL)shouldHideLocationView;
- (BOOL)shouldHideVisibleView;
- (BOOL)shouldHideCategoryView;
- (BOOL)shouldIgnoreInteractionLanding;
- (void)trackElementClick:(id)a0 module:(id)a1 extraParams:(id)a2;
- (void)trackModuleShow:(id)a0 extraParams:(id)a1;
- (void)trackPageShow:(id)a0;
- (void)trackSettingResult:(id)a0 extraParams:(id)a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)currentSelectedItem;

@end
