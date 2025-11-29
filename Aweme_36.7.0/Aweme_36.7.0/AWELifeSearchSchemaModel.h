@class NSString, NSDictionary, NSArray, NSNumber;

@interface AWELifeSearchSchemaModel : NSObject

@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *displayKeyword;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSString *mobParamsExtraString;
@property (copy, nonatomic) NSDictionary *mobParamsExtra;
@property (copy, nonatomic) NSNumber *showPlaceholder;
@property (copy, nonatomic) NSDictionary *dictPropertiesInfo;
@property (copy, nonatomic) NSArray *arrRequiredPropertyKeys;

- (id)initWithParamsInfoDictionary:(id)a0;
- (void)showSchemaErrorAlertMessageIfNeedWithRequiredErrorKeys:(id)a0 nullValueKeys:(id)a1 parseErrorKeys:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
