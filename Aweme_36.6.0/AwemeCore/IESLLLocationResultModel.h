@class NSString, NSNumber;

@interface IESLLLocationResultModel : NSObject

@property (copy, nonatomic) NSString *latitude;
@property (copy, nonatomic) NSString *longitude;
@property (copy, nonatomic) NSString *city_code;
@property (copy, nonatomic) NSString *city_name;
@property (retain, nonatomic) NSNumber *is_pop_select;
@property (copy, nonatomic) NSString *real_city_name;

- (void).cxx_destruct;

@end
