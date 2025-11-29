@class BDSCFeedBackUIModel, BDSCControlViewModel;

@interface BDSCControlViewUIModel : NSObject

@property (retain, nonatomic) BDSCControlViewModel *bottomControlViewModel;
@property (retain, nonatomic) BDSCControlViewModel *middleControlViewModel;
@property (retain, nonatomic) BDSCControlViewModel *fullControlViewModel;
@property (retain, nonatomic) BDSCFeedBackUIModel *feedBackModel;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
