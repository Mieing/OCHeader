@class NSArray, AWEUGHideModel, NSString;

@interface AWEUGShowFreqControlsModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *showFreqList;
@property (retain, nonatomic) AWEUGHideModel *hideModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showFreqListJSONTransformer;
+ (id)hideModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
