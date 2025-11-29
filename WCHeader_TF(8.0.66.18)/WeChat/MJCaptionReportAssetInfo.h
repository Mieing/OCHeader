@class NSString, NSMutableDictionary;

@interface MJCaptionReportAssetInfo : NSObject

@property (readonly, nonatomic) NSString *assetID;
@property (retain, nonatomic) NSMutableDictionary *finalCaptionResultByAudioIDs;
@property (readonly, nonatomic) NSMutableDictionary *voiceInfoByAudioIDs;
@property (readonly, nonatomic) unsigned long long deleteSentenceTimes;
@property (readonly, nonatomic) unsigned long long transTimes;
@property (readonly, nonatomic) unsigned long long invokedInputBoxTimes;
@property (readonly, nonatomic) unsigned long long audioProcessTimeCost;
@property (readonly, nonatomic) unsigned long long asrTimeCost;

- (id)initWithAssetID:(id)a0;
- (void)addFinalCaptionResult:(id)a0 withAudioID:(id)a1;
- (void)addVoiceInfo:(id)a0 withAudioID:(id)a1;
- (void)incrementDeleteSentenceTimes;
- (void)incrementTransTimes;
- (void)incrementInvokedInputBoxTimes;
- (void)addAudioProcessTimeCost:(unsigned long long)a0;
- (void)addAsrTimeCost:(unsigned long long)a0;
- (id)transResultFromCaptionResult:(id)a0;
- (id)toAssetInfoPB;
- (id)description;
- (void).cxx_destruct;

@end
