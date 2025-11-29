@class NSString;

@interface NormDataSource : NSObject <MPSCNNInstanceNormalizationDataSource>

@property (readonly, nonatomic) unsigned long long numberOfFeatureChannels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithChannel:(unsigned long long)a0 epsilon:(float)a1 gamma:(float *)a2 beta:(float *)a3;
- (float *)gamma;
- (float)epsilon;
- (float *)beta;
- (id)label;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
