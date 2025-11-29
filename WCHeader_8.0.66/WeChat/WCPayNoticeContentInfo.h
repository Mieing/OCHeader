@class NSString;

@interface WCPayNoticeContentInfo : NSObject <NSCoding>

@property (nonatomic) unsigned int m_uiAmount;
@property (retain, nonatomic) NSString *m_nsAppName;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
