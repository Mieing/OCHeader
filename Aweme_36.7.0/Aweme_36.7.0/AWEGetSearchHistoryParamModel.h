@class NSArray, NSNumber, NSString;

@interface AWEGetSearchHistoryParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSArray *includeTypeList;
@property (copy, nonatomic) NSArray *excludeTypeList;
@property (retain, nonatomic) NSNumber *maxNumber;
@property (retain, nonatomic) NSNumber *responseHistoryType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *searchStyle;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
