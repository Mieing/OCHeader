@class NSData, NSMutableArray;

@interface ReportIdKeyReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int genstgver;
@property (nonatomic) unsigned int specstgver;
@property (retain, nonatomic) NSMutableArray *datapkg;
@property (retain, nonatomic) NSData *encryptkey;

+ (void)initialize;

@end
