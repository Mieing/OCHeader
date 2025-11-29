@class NSString, NSDictionary;

@interface APIResponse : NSObject <NSSecureCoding>

@property (nonatomic) int detailRetCode;
@property (nonatomic) int retCode;
@property (nonatomic) int seq;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSDictionary *jsonResponse;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) id userData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
