@class NSString;

@interface AWEDTOAdvanceEditorModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showAudioEditTip;
@property (copy, nonatomic) NSString *audioEditTipTitle;
@property (nonatomic) BOOL isAdvancedEditDraft;
@property (nonatomic) BOOL isAdvancedEdit;
@property (nonatomic) BOOL editingOnAdvancedEditPage;
@property (nonatomic) BOOL isAdvancedEditNew;
@property (nonatomic) BOOL isAdvancedEditVideo;
@property (nonatomic) BOOL isAdvancedEditAudio;
@property (nonatomic) BOOL isAdvancedEditText;
@property (nonatomic) BOOL isAdvancedEditSticker;
@property (nonatomic) BOOL isAdvancedEditSubtitle;
@property (nonatomic) BOOL checkPointIsFromAdvancedEdit;
@property (nonatomic) BOOL isAdvancedEditCheckPointDraft;
@property (nonatomic) BOOL isAdvancedEditFilter;
@property (nonatomic) BOOL isAdvancedEditAdjustment;
@property (nonatomic) BOOL isAdvancedEditEffect;
@property (copy, nonatomic) NSString *advanceMusicTrackJson;
@property (nonatomic) BOOL isAdvancedEditSoundEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
