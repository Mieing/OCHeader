@class NSString;

@interface OMJILinkLoginParams : NSObject

@property (readonly, copy, nonatomic) NSString *authCode;
@property (readonly, copy, nonatomic) NSString *clientInfo;
@property (readonly, nonatomic) long long loginType;

- (id)initWithAuthCode:(id)a0 clientInfo:(id)a1;
- (id)initWithAuthCode:(id)a0 clientInfo:(id)a1 loginType:(long long)a2;
- (void).cxx_destruct;

@end
