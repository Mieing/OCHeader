@class AddressInfo, NSString, NSData, NSMutableArray;

@interface OfflineStoreInfo : WXPBGeneratedMessage

@property (retain, nonatomic) AddressInfo *addressInfo;
@property (retain, nonatomic) NSMutableArray *storeHeadImg;
@property (retain, nonatomic) NSData *merchantAnnouncement;
@property (nonatomic) unsigned int startBusinessHour;
@property (nonatomic) unsigned int startBusinessMinute;
@property (nonatomic) unsigned int endBusinessHour;
@property (nonatomic) unsigned int endBusinessMinute;
@property (retain, nonatomic) NSString *name;

+ (void)initialize;

@end
