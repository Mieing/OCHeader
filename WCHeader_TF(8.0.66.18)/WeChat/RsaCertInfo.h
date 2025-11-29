@class NSString;

@interface RsaCertInfo : NSObject <NSCoding>

@property (nonatomic) unsigned int m_uiCertVersion;
@property (retain, nonatomic) NSString *m_nsCertE;
@property (retain, nonatomic) NSString *m_nsCertN;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
