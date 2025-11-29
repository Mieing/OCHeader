@class NSString;

@interface RightTopMenuItem : MMObject <NSCoding>

@property (retain, nonatomic) NSString *m_nsID;
@property (nonatomic) BOOL m_bShowNew;
@property (nonatomic) BOOL m_bHasShowNew;
@property (nonatomic) unsigned int m_uiNewVersion;
@property (nonatomic) unsigned int m_uiOrder;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
