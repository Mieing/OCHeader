@class NSString, AWELabelPositionModel;

@interface AWEAdLabelPositionModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELabelPositionModel *singleLabelPositionModel;
@property (retain, nonatomic) AWELabelPositionModel *dualLabelPositionModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singleLabelPositionModelJSONTransformer;
+ (id)dualLabelPositionModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
