@class BDSCClarityViewUIModel, BDSCSearchListUIModel, BDSCControlViewUIModel;

@interface BDSCUISettingModel : NSObject

@property (retain, nonatomic) BDSCControlViewUIModel *controlViewUIModel;
@property (retain, nonatomic) BDSCClarityViewUIModel *clarityViewUIModel;
@property (retain, nonatomic) BDSCSearchListUIModel *searchListUIModel;

+ (id)modelCustomPropertyMapper;
+ (id)modelWithDictionary:(id)a0 default:(unsigned long long)a1;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
