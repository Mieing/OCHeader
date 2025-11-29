@class HTSEventContext, IESLiveGuideAudioSubScenePickerViewConfig, IESLiveGuideModel;

@interface IESLiveGuideAudioSubSceneViewModel : NSObject

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveGuideAudioSubScenePickerViewConfig *subSceneConfig;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (nonatomic) unsigned long long selectedSubSceneIndex;

- (unsigned long long)liveType;
- (id)initWithModel:(id)a0 trackContext:(id)a1;
- (unsigned long long)getSubSceneByIndex:(unsigned long long)a0;
- (id)getCurrentSelectedAudioSubSceneStr;
- (id)getSubSceneTrackStringFromPreviewView;
- (id)getSubSceneTrackString;
- (void)trackSceneClickedForPartyKTV;
- (void)setupSubScenePickerConfig;
- (void)setupDefaultSelectedIndex;
- (BOOL)enablePicker;
- (id)getModeListIndexArray;
- (BOOL)configEnableWithScene:(unsigned long long)a0;
- (BOOL)enableKTVMode;
- (BOOL)isPartyKTVScene;
- (void)trackSceneShowForPartyKTV;
- (void).cxx_destruct;
- (id)currentSelectedItem;

@end
