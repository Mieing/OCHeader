@class NSString;

@interface AWEUserSendCodeModel : NSObject

@property (nonatomic) long long sendScene;
@property (copy, nonatomic) NSString *codeAddress;
@property (nonatomic) long long sendType;

- (id)initWithSendScene:(long long)a0 sendType:(long long)a1 codeAddress:(id)a2;
- (void).cxx_destruct;

@end
