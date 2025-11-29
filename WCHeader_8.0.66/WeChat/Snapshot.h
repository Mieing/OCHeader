@class Address, NSString, NSMutableArray, Express;

@interface Snapshot : WXPBGeneratedMessage

@property (nonatomic) unsigned int productCount;
@property (retain, nonatomic) NSMutableArray *productions;
@property (retain, nonatomic) Express *express;
@property (retain, nonatomic) Address *address;
@property (retain, nonatomic) NSMutableArray *receipt;
@property (nonatomic) unsigned int receiptCount;
@property (retain, nonatomic) NSString *lockId;

+ (void)initialize;

@end
