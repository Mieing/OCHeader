@class NSString, IESLiveMoveGoldboxLocationMethodPanelSizeModel, IESLiveMoveGoldboxLocationMethodCoordinateModel;

@interface IESLiveMoveGoldboxLocationMethodParamModel : IESLiveBridgeModel

@property (retain, nonatomic) IESLiveMoveGoldboxLocationMethodCoordinateModel *coordinate;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) IESLiveMoveGoldboxLocationMethodPanelSizeModel *panelSize;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
