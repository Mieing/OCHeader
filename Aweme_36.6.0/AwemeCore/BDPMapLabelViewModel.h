@class BDPMapLabelModel;

@interface BDPMapLabelViewModel : BDPBasePluginModel

@property (copy, nonatomic) BDPMapLabelModel *label;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double labelMaxWidth;
@property (nonatomic) double labelMaxHeight;

- (void)resetProperty;
- (void).cxx_destruct;
- (id)init;

@end
