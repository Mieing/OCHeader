@class NSArray, NSString, AWELiteBagGuideAdDetailDrawDataModel, NSNumber;

@interface AWELiteBagGuideAdDetailModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *scoreAmount;
@property (copy, nonatomic) NSArray *extraStageScoreAmount;
@property (retain, nonatomic) AWELiteBagGuideAdDetailDrawDataModel *drawData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
