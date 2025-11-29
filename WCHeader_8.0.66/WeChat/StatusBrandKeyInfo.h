@class NSString;

@interface StatusBrandKeyInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *ticketKey;
@property (retain, nonatomic) NSString *detail;
@property (nonatomic) unsigned int cryptoType;
@property (retain, nonatomic) NSString *cryptoDetail;

+ (void)initialize;

@end
