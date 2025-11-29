@class NSString;

@interface MyInvoiceData : NSObject

@property (nonatomic) long long group_id;
@property (retain, nonatomic) NSString *title_type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *tax_number;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *phone;
@property (retain, nonatomic) NSString *bank_name;
@property (retain, nonatomic) NSString *bank_number;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *invoice_url;

+ (BOOL)GetIsHaveInvoiceInfoFromJson:(id)a0;
+ (id)GetInvoiceArrFromJson:(id)a0;
+ (id)GenJsonFromInvoiceData:(id)a0 andUin:(unsigned long long)a1;
+ (id)GenJsonForSelectedInvoiceData:(id)a0;

- (id)clone;
- (id)NilOrStringOf:(id)a0;
- (void).cxx_destruct;

@end
