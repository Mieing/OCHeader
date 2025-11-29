@class BDPVideoDefinitionModel, BDPVideoDefinitionListItem;

@interface BDPVideoDefinitionPreloadResultModel : NSObject

@property (copy, nonatomic) BDPVideoDefinitionModel *model;
@property (copy, nonatomic) BDPVideoDefinitionListItem *item;
@property (nonatomic) double preloadTime;

- (id)initWithModel:(id)a0 item:(id)a1 preloadTime:(double)a2;
- (void).cxx_destruct;

@end
