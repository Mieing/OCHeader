@class NSString;

@interface IESLLAddressModel : IESLLifeBaseApiModel <IESLLFuseAddressModel>

@property (readonly, nonatomic) NSString *f_simpleAddr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *simpleAddr;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *district;
@property (retain, nonatomic) NSString *cityCode;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSString *districtCode;
@property (retain, nonatomic) NSString *cityCodeV2;
@property (retain, nonatomic) NSString *addressWithExtraInfo;
@property (retain, nonatomic) NSString *imTownName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
