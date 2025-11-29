@class CGXStreamParameterModuleBridge, NSString;
@protocol XPlayResolution;

@interface CGXCustomResolution : CGObject <CGXStreamParameterDelegate, XPlayStreamingParametersControllerProtocol>

@property (copy, nonatomic) id /* block */ resCallback;
@property (weak, nonatomic) CGXStreamParameterModuleBridge *streamModule;
@property (retain, nonatomic) id<XPlayResolution> currentStreamParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL useCustomKbps;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (void)switchResolution:(id)a0 callback:(id /* block */)a1;
- (void)onStreamParameterChangedWithResult:(long long)a0 param:(id)a1;
- (void)switchStreamingParameters:(id)a0 callback:(id /* block */)a1;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)callbackVideoQualityChange:(long long)a0 result:(BOOL)a1;
- (void).cxx_destruct;

@end
