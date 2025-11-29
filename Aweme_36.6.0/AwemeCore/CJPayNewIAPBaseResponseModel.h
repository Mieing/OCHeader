@class NSString;

@interface CJPayNewIAPBaseResponseModel : NSObject

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *status;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
