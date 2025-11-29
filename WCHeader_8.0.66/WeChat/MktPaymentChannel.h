@class NSString;

@interface MktPaymentChannel : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bankCode;
@property (nonatomic) unsigned int selected;
@property (retain, nonatomic) NSString *bindSerial;

+ (void)initialize;

@end
