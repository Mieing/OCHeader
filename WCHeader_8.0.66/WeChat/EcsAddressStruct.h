@class NSString, NSNumber;

@interface EcsAddressStruct : NSObject

@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *postalCode;
@property (copy, nonatomic) NSString *nationalCode;
@property (copy, nonatomic) NSString *telNumber;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *county;
@property (copy, nonatomic) NSString *street;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *houseNum;
@property (retain, nonatomic) NSNumber *addressId;

+ (id)makeWithUserName:(id)a0 postalCode:(id)a1 nationalCode:(id)a2 telNumber:(id)a3 province:(id)a4 city:(id)a5 county:(id)a6 street:(id)a7 detail:(id)a8 houseNum:(id)a9 addressId:(id)a10;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
