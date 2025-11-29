@class NSString, UIImage;

@interface CertInfo : NSObject <NSCoding>

@property (nonatomic) unsigned int m_uiVersion;
@property (nonatomic) unsigned int m_uiKey;
@property (nonatomic) unsigned int m_uiLastUpdateTime;
@property (retain, nonatomic) NSString *m_nsDesc;
@property (retain, nonatomic) UIImage *m_imgIcon;

- (void)preInit;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
