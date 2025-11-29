@class NSString, AWEHPTabGuidePitayaLabelResultModel, AWEHPTabGuidePitayaButtonResultModel;

@interface AWEHPTabGuidePitayaAwemeResultModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *awemeID;
@property (retain, nonatomic) AWEHPTabGuidePitayaLabelResultModel *label;
@property (retain, nonatomic) AWEHPTabGuidePitayaButtonResultModel *button;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)labelJSONTransformer;
+ (id)buttonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
