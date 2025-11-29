@class NSString;
@protocol IESLiveNetworkConfig;

@interface IESLiveNetworkConfig : NSObject <IESLiveNetworkConfig>

@property (retain) id<IESLiveNetworkConfig> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)requestCommonParams;
- (void)configRequestHeaders:(id)a0;
- (id)commonPathWihRelativePath:(id)a0;
- (id)newPathByPathMapWithOriginalPath:(id)a0;
- (BOOL)needToTrimV2WithRelativePath:(id)a0;
- (void)configBOEEnvWithRequestModel:(id)a0;
- (void).cxx_destruct;

@end
