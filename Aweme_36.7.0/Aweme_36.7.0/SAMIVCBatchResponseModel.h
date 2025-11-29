@class NSString, NSArray;

@interface SAMIVCBatchResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *statusText;
@property (retain, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSArray *infoList;

+ (id)infoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
