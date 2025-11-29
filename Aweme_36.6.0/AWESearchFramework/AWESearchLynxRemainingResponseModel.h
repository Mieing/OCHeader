@class NSString, NSDictionary, NSArray, AWEDynamicPatchModel;

@interface AWESearchLynxRemainingResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSDictionary *remainingData;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) AWEDynamicPatchModel *dynamicPatch;
@property (copy, nonatomic) NSArray *awemeList;
@property (copy, nonatomic) NSArray *awemeListDic;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
