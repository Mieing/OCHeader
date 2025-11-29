@class NSString;

@interface MBErrorInfo : NSObject

@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *errMsg;

- (id)initWithErrCode:(int)a0 Msg:(id)a1;
- (id)toNSError;
- (void).cxx_destruct;

@end
