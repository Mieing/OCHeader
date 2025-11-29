@class NSDictionary, NSArray;

@interface AWEStudioEditToolBarFeatureConfig : AWEStudioComposerBaseFeatureConfig

@property (retain, nonatomic) NSDictionary *itemString2ContextValueDict;
@property (nonatomic) BOOL forceExpand;
@property (nonatomic) long long exposedItemCount;
@property (copy, nonatomic) NSArray *featureItemSortOrderStringArray;
@property (readonly, copy, nonatomic) NSArray *featureItemSortOrder;
@property (copy, nonatomic) NSDictionary *customItemDict;
@property (nonatomic) long long toolBarStyle;
@property (nonatomic) BOOL shareItemEnabled;
@property (nonatomic) BOOL autoCaptionItemEnabled;
@property (nonatomic) BOOL customStickerItemEnabled;
@property (nonatomic) BOOL HDRItemEnabled;
@property (nonatomic) BOOL imageTemplateItemEnabled;
@property (nonatomic) BOOL stickerPanelItemEnabled;
@property (nonatomic) BOOL beautyItemEnabled;
@property (nonatomic) BOOL volumeItemEnabled;
@property (nonatomic) BOOL voiceChangerItemEnabled;
@property (nonatomic) BOOL publishSettingsItemEnabled;
@property (nonatomic) BOOL quickFlashStickerItemEnabled;
@property (nonatomic) BOOL hashTagStickerItemEnabled;
@property (nonatomic) BOOL advanceEditorItemEnabled;
@property (nonatomic) BOOL AIExpandItemEnabled;
@property (nonatomic) BOOL tagsItemEnabled;
@property (nonatomic) BOOL chapterItemEnabled;
@property (nonatomic) BOOL selectTemplateItemEnabled;
@property (nonatomic) BOOL aiImageToLivephotoEnabled;
@property (nonatomic) BOOL hideToolBar;

- (id)initWithMode:(unsigned long long)a0;
- (void).cxx_destruct;

@end
