@interface WCPayCreExtInfo : NSObject <NSCoding>

@property (nonatomic) unsigned int m_needCreidRenewal;
@property (nonatomic) unsigned int m_needBirthDate;
@property (nonatomic) unsigned int m_needCreExpireDate;
@property (nonatomic) unsigned int m_needCreType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
