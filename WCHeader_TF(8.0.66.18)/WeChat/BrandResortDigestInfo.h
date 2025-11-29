@class NSString;

@interface BrandResortDigestInfo : NSObject <NSCopying>

@property (nonatomic) BOOL m_bIsBrandResortNewDigestBold;
@property (retain, nonatomic) NSString *m_brandResortNewDigestJson;
@property (retain, nonatomic) NSString *m_brandResortNewDigestStrategyInfo;
@property (nonatomic) unsigned int m_brandResortNewDigestExposeCountInMainSession;
@property (nonatomic) unsigned int m_brandResortNewBoldDigestExposeCountInMainSession;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
