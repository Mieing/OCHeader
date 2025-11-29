@class ACCCreationToolMediaTypeObject, NSDictionary, NSString, AWEVideoPublishViewModel;
@protocol ACCRecordFrameRatioService;

@interface AWEOpenRecordModeFactoryImpl : NSObject <ACCRecordModeFactory>

@property (retain, nonatomic) NSDictionary *modeMapDictionary;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) ACCCreationToolMediaTypeObject *mediaType;
@property (weak, nonatomic) id<ACCRecordFrameRatioService> frameRatioService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)preconditionEnableLive:(id)a0;

- (id)storyMode;
- (id)modeWithIdentifier:(long long)a0;
- (id)displayModesArray;
- (id)modeWithButtonType:(long long)a0;
- (id)tabConfigWithTitle:(id)a0 forMode:(id)a1;
- (id)createNewModeWithIdentifier:(long long)a0;
- (id)pictureMode;
- (id)pictureAlbumMode;
- (id)mixHoldModeVariable;
- (id)storyCombinedMode;
- (id)generateStoryCombinedModeSubModeIds;
- (id)generateStoryCombinedModeSubModesDict:(id)a0;
- (id)configTitleWithRecordMode:(id)a0 forMode:(id)a1;
- (void).cxx_destruct;

@end
