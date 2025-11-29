@class NSString;

@interface WCDeviceExtData : NSObject

@property (retain, nonatomic) NSString *m_alias;
@property (retain, nonatomic) NSString *m_iconUrl;
@property (retain, nonatomic) NSString *m_jumpUrl;
@property (retain, nonatomic) NSString *m_deviceTitle;
@property (retain, nonatomic) NSString *m_deviceDesc;
@property (retain, nonatomic) NSString *m_category;
@property (nonatomic) unsigned int m_deviceTypeMainDevice;
@property (nonatomic) unsigned int m_isEnterMyDevice;
@property (nonatomic) long long m_bleSimpleProtol;
@property (retain, nonatomic) NSString *m_ability;
@property (retain, nonatomic) NSString *m_serialNumber;
@property (retain, nonatomic) NSString *m_abilityExtInfo;
@property (retain, nonatomic) NSString *m_subDeviceIDList;
@property (nonatomic) int m_deviceSourceType;

- (void).cxx_destruct;

@end
