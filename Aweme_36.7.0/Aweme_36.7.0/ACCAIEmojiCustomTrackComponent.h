@class NSString;
@protocol ACCRecordFlowControlService;

@interface ACCAIEmojiCustomTrackComponent : ACCFeatureComponent <ACCRecordFlowControlServiceSubscriber>

@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (nonatomic) long long recordCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flowControlServiceDidStartRecordFlow:(unsigned long long)a0 source:(id)a1;
- (void)componentDidMount;
- (id)imModel;
- (void)bindServices:(id)a0;
- (id)p_mutableCommonParams;
- (void).cxx_destruct;

@end
