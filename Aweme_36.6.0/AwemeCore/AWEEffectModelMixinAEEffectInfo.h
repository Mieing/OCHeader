@class NSString, IESEffectModel, AEKBasicResource;

@interface AWEEffectModelMixinAEEffectInfo : NSObject

@property (weak, nonatomic) IESEffectModel *hostEffectModel;
@property (nonatomic) unsigned long long globalDraftType;
@property (copy, nonatomic) NSString *categoryKey;
@property (copy, nonatomic) NSString *downloadLogTraceID;
@property (copy, nonatomic) NSString *downloadParentLogTraceID;
@property (readonly, nonatomic) unsigned long long effectType;
@property (readonly, nonatomic) unsigned long long effectPackType;
@property (retain, nonatomic) AEKBasicResource *APJSResource;
@property (nonatomic) double didClickToUseEffectTime;
@property (nonatomic) double startLoadEffectResourceTime;
@property (nonatomic) double finishLoadEffectResourceTime;
@property (nonatomic) double startDownloadEffectResourceTime;
@property (nonatomic) double finishDownloadEffectResourceTime;
@property (nonatomic) double startUpdateNLEDataTime;
@property (nonatomic) double finishUpdateNLEDataTime;
@property (nonatomic) double startRenderTime;
@property (nonatomic) double finishRenderTime;

- (void).cxx_destruct;

@end
