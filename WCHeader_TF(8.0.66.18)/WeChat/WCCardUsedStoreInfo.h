@class NSString;

@interface WCCardUsedStoreInfo : MMObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (retain, nonatomic) NSString *descriptor;
@property (retain, nonatomic) NSString *phone;
@property (retain, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *province;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *address;
@property (nonatomic) unsigned int distance;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) NSString *appBrandUserName;
@property (retain, nonatomic) NSString *appBrandPass;

- (void)parseFromJSONDic:(id)a0;
- (void).cxx_destruct;

@end
