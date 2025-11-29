@class NSString;

@interface CSJUser : NSObject

@property (copy, nonatomic) NSString *phone;
@property (copy, nonatomic) NSString *data;
@property (nonatomic) long long ageGroup;
@property (nonatomic) long long personalized_ad;

- (void).cxx_destruct;
- (id)dictionaryValue;

@end
