@class NSString;

@interface WCPayCredInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *m_nsWCPayCredType;
@property (retain, nonatomic) NSString *m_nsWCPayCredName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
