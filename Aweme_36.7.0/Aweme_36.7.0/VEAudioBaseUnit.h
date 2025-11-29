@class NSMutableDictionary, VEAudioProcessConfig, NSString, NSMutableArray;

@interface VEAudioBaseUnit : VEUnitObject <VEProcessSampleDelegate>

@property (nonatomic) long long targetSampleCount;
@property (retain, nonatomic) NSMutableDictionary *streamsMap;
@property (retain, nonatomic) NSMutableArray *sampleDatas;
@property (retain, nonatomic) VEAudioProcessConfig *config;
@property (nonatomic) BOOL isStoped;
@property (retain, nonatomic) NSString *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkConfig:(id)a0;
- (void)p_stopProcessor;
- (void)downData:(id)a0;
- (void)p_startProcessor;
- (void)p_onStopProcessor;
- (BOOL)processAudioSampleData:(id)a0;
- (void)removeAllDownStreams;
- (void)addDownStream:(id)a0 innerRoute:(id)a1;
- (id)getStreamsMap;
- (BOOL)processSampleData:(id)a0;
- (BOOL)setAudioConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearData;

@end
