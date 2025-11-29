@class WCPayCreExtInfo;

@interface WCPayCreTypeRuleInfo : NSObject <NSCoding>

@property (nonatomic) unsigned int m_supportCreType;
@property (retain, nonatomic) WCPayCreExtInfo *m_creNeedInfo;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
