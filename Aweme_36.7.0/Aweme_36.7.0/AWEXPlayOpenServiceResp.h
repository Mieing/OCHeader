@class NSString, NSDictionary;

@interface AWEXPlayOpenServiceResp : NSObject

@property (nonatomic) long long respCode;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSDictionary *data;

+ (id)responseWithCode:(long long)a0 message:(id)a1 data:(id)a2;

- (void).cxx_destruct;

@end
