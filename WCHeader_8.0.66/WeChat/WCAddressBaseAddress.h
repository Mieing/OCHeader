@class NSString;

@interface WCAddressBaseAddress : NSObject <NSCoding>

@property (retain, nonatomic) NSString *m_nsNationalCode;
@property (readonly, nonatomic) unsigned int m_uiAddressID;
@property (retain, nonatomic) NSString *m_nsUserName;
@property (retain, nonatomic) NSString *m_nsTelNumber;
@property (retain, nonatomic) NSString *m_nsCountryCode;
@property (retain, nonatomic) NSString *m_nsAddressStageID;
@property (retain, nonatomic) NSString *m_nsAddressPostCode;
@property (retain, nonatomic) NSString *m_nsAddressProviceFirstStageName;
@property (retain, nonatomic) NSString *m_nsAddressCitySecondStageName;
@property (retain, nonatomic) NSString *m_nsAddressCountiesThirdStageName;
@property (retain, nonatomic) NSString *m_nsAddressStreetFourthStageName;
@property (retain, nonatomic) NSString *m_nsAddressDetailInfo;
@property (retain, nonatomic) NSString *m_nsEncryptData;
@property (retain, nonatomic) NSString *m_nsEncryptType;

- (BOOL)isErrorFormatPhoneNumber;
- (id)initWithID:(unsigned int)a0;
- (id)copyAddress;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getRegionString;
- (id)getCopyedString;
- (long long)formatErrorCode;
- (void).cxx_destruct;

@end
