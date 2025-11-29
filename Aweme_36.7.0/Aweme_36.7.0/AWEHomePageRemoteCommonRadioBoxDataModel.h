@class NSString, NSArray;

@interface AWEHomePageRemoteCommonRadioBoxDataModel : AWEHomePageRemoteItemDataModel <MTLJSONSerializing>

@property (nonatomic) long long style;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *radioButtonModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)radioButtonModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isModelValid;

@end
