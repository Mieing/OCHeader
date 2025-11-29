@class NSString;

@interface WCPayPocketMoneyMsgItem : MMObject <NSCopying>

@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *apppath;
@property (copy, nonatomic) NSString *appquery;
@property (nonatomic) BOOL ishalfscreen;
@property (nonatomic) BOOL transparent;
@property (nonatomic) double heightpercent;
@property (copy, nonatomic) NSString *minversion;
@property (copy, nonatomic) NSString *animin;
@property (copy, nonatomic) NSString *animout;
@property (copy, nonatomic) NSString *extradata;
@property (copy, nonatomic) NSString *senderdigest;
@property (copy, nonatomic) NSString *receiverdigest;
@property (copy, nonatomic) NSString *sourceicon;
@property (copy, nonatomic) NSString *paymsgid;

+ (id)fromXML:(struct XmlReaderNode_t { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toXML;
- (void).cxx_destruct;

@end
