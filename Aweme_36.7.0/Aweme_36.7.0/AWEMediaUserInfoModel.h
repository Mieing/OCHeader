@class NSNumber, NSString, NSDictionary;

@interface AWEMediaUserInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *uid;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *birthday;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *age;
@property (copy, nonatomic) NSString *zodiac;
@property (copy, nonatomic) NSString *cnZodiac;
@property (copy, nonatomic) NSString *schoolName;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
