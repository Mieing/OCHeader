@class NSArray, NSNumber;

@interface AWECoverSearchHistoryParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *includeTypeList;
@property (copy, nonatomic) NSArray *excludeTypeList;
@property (retain, nonatomic) NSNumber *maxNumber;
@property (retain, nonatomic) NSNumber *responseHistoryType;
@property (copy, nonatomic) NSArray *addWords;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
