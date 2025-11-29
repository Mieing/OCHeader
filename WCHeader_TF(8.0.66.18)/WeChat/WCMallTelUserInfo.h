@class NSString;

@interface WCMallTelUserInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *m_nsUserName;
@property (retain, nonatomic) NSString *m_nsTelephoneNumber;
@property (retain, nonatomic) NSString *m_nsOperatorName;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
