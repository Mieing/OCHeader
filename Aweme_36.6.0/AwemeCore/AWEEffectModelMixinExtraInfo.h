@class IESEffectModel;

@interface AWEEffectModelMixinExtraInfo : NSObject

@property (weak, nonatomic) IESEffectModel *hostEffectModel;

- (id)parseMetricsDictWithPrefix:(BOOL)a0;
- (void).cxx_destruct;

@end
