@class AWEStudioRecorderFeatureRecordModesConfig, NSString, NSDictionary, AWEVideoPublishViewModel;

@interface AWEStudioComposerRecordModeFactoryImpl : NSObject <ACCRecordModeFactory>

@property (retain, nonatomic) AWEStudioRecorderFeatureRecordModesConfig *config;
@property (retain, nonatomic) NSDictionary *modeMapDictionary;
@property (copy, nonatomic) NSDictionary *tabNameDict;
@property (copy, nonatomic) NSDictionary *modeID2ModeDict;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)storyMode;
- (id)modeWithIdentifier:(long long)a0;
- (id)displayModesArray;
- (id)modeWithButtonType:(long long)a0;
- (id)tabConfigWithTitle:(id)a0 forMode:(id)a1;
- (id)pictureMode;
- (id)storyCombinedMode;
- (id)storyDummyMode;
- (id)liveMode;
- (id)MVMode;
- (id)mixMode;
- (id)mix15SecondsMode;
- (id)combinedMode;
- (id)mix60SecondsMode;
- (id)mix3MinutesMode;
- (id)AIGCMode;
- (id)inspirationMode;
- (id)cinemaMode;
- (id)socialCombineMode;
- (long long)innerFrameRationTypeForModeID:(id)a0;
- (long long)innerFrameRationTypeForFrameRatio:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)textMode;

@end
