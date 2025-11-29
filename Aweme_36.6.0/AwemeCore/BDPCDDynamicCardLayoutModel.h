@class NSString, BDPCDDynamicCardLayerModel, BDPCDDynamicCardCustomActionModel;

@interface BDPCDDynamicCardLayoutModel : BDPCDDynamicCardAtomicModel

@property (nonatomic) long long weight;
@property (nonatomic) long long alignType;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *backgroundImg;
@property (nonatomic) long long layout;
@property (nonatomic) long long scroll;
@property (retain, nonatomic) BDPCDDynamicCardLayerModel *layer;
@property (retain, nonatomic) BDPCDDynamicCardCustomActionModel *actionModel;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
