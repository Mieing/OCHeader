@class NSMutableDictionary;

@interface IESIMCommonGathererActionTrace : IESIMFPSActionTrace

@property (retain, nonatomic) NSMutableDictionary *setDict;

- (void)handleActionTraitDict:(id)a0;
- (void)handleFrameTraceTrait:(id)a0;
- (id)traitDict;
- (void).cxx_destruct;
- (id)init;
- (void)clean;

@end
