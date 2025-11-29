@class NSString, NSArray, AFDCloseFriendsMomentModel;

@interface AFDNotesAudioModel : NSObject <AFDNotesAudioModelProtocol>

@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSArray *playURLList;
@property (copy, nonatomic) NSString *audioFilePath;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *wave;
@property (nonatomic) BOOL isLoadingData;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) AFDCloseFriendsMomentModel *momentModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithAweme:(id)a0;
- (id)defaultWaveHeightArrForBubbleAudio;
- (void)configWithPublishModel:(id)a0;
- (id)defaultWave;
- (void)trackEmptyDurationWithIsFromDraft:(BOOL)a0;
- (void)trackEmptyWave:(BOOL)a0 isFromDraft:(BOOL)a1;
- (void).cxx_destruct;

@end
