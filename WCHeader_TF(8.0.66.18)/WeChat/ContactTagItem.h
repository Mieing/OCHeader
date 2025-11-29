@class NSString;

@interface ContactTagItem : NSObject <NSCoding>

@property (nonatomic) unsigned int m_uiID;
@property (retain, nonatomic) NSString *m_nsName;
@property (nonatomic) unsigned int m_uiIndex;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
