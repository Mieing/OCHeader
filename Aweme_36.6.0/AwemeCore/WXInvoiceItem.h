@class NSString;

@interface WXInvoiceItem : NSObject

@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *extMsg;
@property (nonatomic) unsigned int cardState;
@property (copy, nonatomic) NSString *encryptCode;
@property (copy, nonatomic) NSString *appID;

- (void).cxx_destruct;

@end
