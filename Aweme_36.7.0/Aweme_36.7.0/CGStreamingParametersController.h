@class NSString;
@protocol XPlayResolution;

@interface CGStreamingParametersController : CGObject <XPlayStreamingParametersControllerProtocol>

@property (copy, nonatomic) id /* block */ resCallback;
@property (retain, nonatomic) id<XPlayResolution> currentStreamParameters;
@property (readonly, nonatomic) BOOL useCustomKbps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (void)switchResolution:(id)a0 callback:(id /* block */)a1;
- (void)switchStreamingParameters:(id)a0 callback:(id /* block */)a1;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)handleStreamingParameterSetResult:(id)a0;
- (void)_handleStreamingParameterSetResult:(id)a0;
- (void)sendStreamingParametersSwitchCommand:(id)a0;
- (void)callbackVideoQualityChange:(long long)a0 result:(BOOL)a1;
- (void).cxx_destruct;

@end
