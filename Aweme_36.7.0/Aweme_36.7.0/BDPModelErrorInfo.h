@class NSString;

@interface BDPModelErrorInfo : NSObject

@property (nonatomic) unsigned long long errorCode;
@property (copy, nonatomic) NSString *errorMsg;

- (id)initWithErrorCode:(unsigned long long)a0 errorMsg:(id)a1;
- (void).cxx_destruct;

@end
