@class NSNumber;

@interface AWEEccsIMLoginStateDataModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *state;
@property (retain, nonatomic) NSNumber *wsState;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
