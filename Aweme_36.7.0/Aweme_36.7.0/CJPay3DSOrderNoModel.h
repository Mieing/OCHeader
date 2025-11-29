@class NSString;

@interface CJPay3DSOrderNoModel : NSObject

@property (copy, nonatomic) NSString *referenceID;
@property (copy, nonatomic) NSString *authNo;
@property (nonatomic) BOOL ddcIsReady;

- (void).cxx_destruct;

@end
