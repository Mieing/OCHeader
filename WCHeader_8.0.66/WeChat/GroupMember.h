@class NSString;

@interface GroupMember : NSObject

@property (retain, nonatomic) NSString *m_nsMemberName;
@property (nonatomic) unsigned int m_uiMemberStatus;
@property (retain, nonatomic) NSString *m_nsNickName;
@property (retain, nonatomic) NSString *m_nsFullPY;
@property (nonatomic) unsigned int m_uiSex;
@property (retain, nonatomic) NSString *m_nsRemark;
@property (retain, nonatomic) NSString *m_nsRemarkShortPY;
@property (retain, nonatomic) NSString *m_nsRemarkFullPY;
@property (retain, nonatomic) NSString *m_nsCountry;
@property (retain, nonatomic) NSString *m_nsProvince;
@property (retain, nonatomic) NSString *m_nsCity;
@property (retain, nonatomic) NSString *m_nsSignature;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
