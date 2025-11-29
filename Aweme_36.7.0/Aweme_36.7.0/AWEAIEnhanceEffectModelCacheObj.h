@class NSError, IESEffectModel;

@interface AWEAIEnhanceEffectModelCacheObj : NSObject

@property (retain, nonatomic) IESEffectModel *effectModel;
@property (nonatomic) BOOL isDownloaded;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
