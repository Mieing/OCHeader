@class NSString;

@interface NewArrivalCountItem : NSObject <NSCoding>

@property (nonatomic) unsigned int m_uiArrivalCount;
@property (nonatomic) unsigned int m_uiMsgID;
@property (retain, nonatomic) NSString *m_nsUsrName;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
