@class NSString;

@interface WCPayBannerNotice : NSObject <NSCoding, NSCopying>

@property (retain, nonatomic) NSString *m_detailUrl;
@property (retain, nonatomic) NSString *m_wording;
@property (nonatomic) unsigned int m_readOnly;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
