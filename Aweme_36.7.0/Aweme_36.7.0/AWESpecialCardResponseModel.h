@class NSString;

@interface AWESpecialCardResponseModel : AWEAwemeResponseModel

@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSString *businessExtra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
