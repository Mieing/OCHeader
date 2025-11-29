@class NSString, UIImage;

@interface ScanCodeOcrReportRequest : NSObject

@property (retain, nonatomic) NSString *codeContent;
@property (nonatomic) int codeType;
@property (nonatomic) int getA8KeyScene;
@property (nonatomic) int getA8KeyRequestId;
@property (retain, nonatomic) NSString *msgId;
@property (nonatomic) long long scanRawFronScene;
@property (nonatomic) int paymentCodeType;
@property (nonatomic) BOOL isPaymentCode;
@property (readonly, nonatomic) UIImage *resultOriginalImage;

- (id)initWithCodeContent:(id)a0 codeType:(int)a1 paymentCodeType:(int)a2 isPaymentCode:(BOOL)a3 originalImage:(id)a4 getA8KeyScene:(int)a5 getA8KeyRequestId:(int)a6 msgId:(id)a7 fromRawScene:(long long)a8;
- (void).cxx_destruct;

@end
