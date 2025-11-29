@class NSArray, NSString, AWEECMallSFSearchResultModel;

@interface AWEECMallSecondFloorModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEECMallSFSearchResultModel *searchResult;
@property (copy, nonatomic) NSArray *activityResults;
@property (copy, nonatomic) NSString *defaultColor;
@property (copy, nonatomic) NSString *bgURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activityResultsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
