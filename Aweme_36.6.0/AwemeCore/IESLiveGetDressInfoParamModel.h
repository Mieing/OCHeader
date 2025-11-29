@class NSString, NSNumber;

@interface IESLiveGetDressInfoParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *dressId;
@property (retain, nonatomic) NSNumber *dressType;
@property (copy, nonatomic) NSString *definition;
@property (copy, nonatomic) NSString *definitionName;
@property (retain, nonatomic) NSNumber *autoFetch;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
