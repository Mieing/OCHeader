@class BDPCDDynamicCardBusinessTagMainModel, BDPCDDynamicCardBusinessTagPrefixModel, BDPCDDynamicCardBorderModel;

@interface BDPCDDynamicCardBusinessTagModel : BDPCDDynamicCardAtomicModel

@property (retain, nonatomic) BDPCDDynamicCardBusinessTagPrefixModel *prefix;
@property (retain, nonatomic) BDPCDDynamicCardBusinessTagMainModel *main;
@property (retain, nonatomic) BDPCDDynamicCardBorderModel *midLine;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
