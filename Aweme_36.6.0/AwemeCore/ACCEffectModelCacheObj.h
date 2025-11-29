@class IESEffectModel;

@interface ACCEffectModelCacheObj : NSObject

@property (retain, nonatomic) IESEffectModel *effectModel;
@property (nonatomic) BOOL isDownloaded;

- (void).cxx_destruct;

@end
