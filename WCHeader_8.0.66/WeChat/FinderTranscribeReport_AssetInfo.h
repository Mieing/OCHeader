@class NSString, NSMutableArray;

@interface FinderTranscribeReport_AssetInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *assetId;
@property (retain, nonatomic) NSMutableArray *finalSubtitle;
@property (retain, nonatomic) NSMutableArray *voiceInfo;
@property (nonatomic) unsigned int deleteSentenceTimes;
@property (nonatomic) unsigned int transTimes;
@property (nonatomic) unsigned int invokedInputBoxTimes;
@property (nonatomic) unsigned long long audioProcessTimeCost;
@property (nonatomic) unsigned long long asrTimeCost;

+ (void)initialize;

@end
