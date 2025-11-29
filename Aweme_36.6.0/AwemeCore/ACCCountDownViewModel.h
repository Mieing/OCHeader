@class ACCCountDownModel, RACSignal, RACSubject, NSString;

@interface ACCCountDownViewModel : ACCRecorderViewModel <ACCCountDownProvideProtocol>

@property (retain, nonatomic) RACSubject *dismissCountDownPanelSubject;
@property (nonatomic) long long delayRecordMode;
@property (nonatomic) long long delayRecordType;
@property (retain, nonatomic) ACCCountDownModel *countDownModel;
@property (nonatomic) BOOL disableTakePicture;
@property (readonly, nonatomic) RACSignal *dismissCountDownPanelSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCountDownCapture:(long long)a0;
- (void)cancelCountDownCapture;
- (void)startCountDownCapture:(long long)a0 sourceFrom:(long long)a1;
- (id)normalizePointsData:(id)a0;
- (id)convertVolumesWithPoints:(id)a0 barCount:(long long)a1 assetDuration:(double)a2 shouldCount:(long long)a3 shouldConvert:(BOOL)a4;
- (void)configDelayRecordMode;
- (void)send_dismissCountDownPanelSignal:(BOOL)a0;
- (void)showVolumesWithShouldCount:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)musicAsset;

@end
