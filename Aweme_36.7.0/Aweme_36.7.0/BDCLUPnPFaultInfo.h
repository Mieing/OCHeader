@class NSString, BDCLUPnPErrorInfo;

@interface BDCLUPnPFaultInfo : NSObject

@property (copy, nonatomic) NSString *faultcode;
@property (copy, nonatomic) NSString *faultstring;
@property (retain, nonatomic) BDCLUPnPErrorInfo *errorInfo;

- (void).cxx_destruct;
- (void)setArray:(id)a0;

@end
