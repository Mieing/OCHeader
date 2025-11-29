@class NSMutableArray;

@interface SnsCdnDistanceDataBank : WXPBGeneratedMessage

@property (nonatomic) unsigned int usrProvinceId;
@property (nonatomic) unsigned int usrCityId;
@property (retain, nonatomic) NSMutableArray *items;

+ (void)initialize;

@end
