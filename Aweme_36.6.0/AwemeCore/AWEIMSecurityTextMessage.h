@interface AWEIMSecurityTextMessage : AWEIMTextMessage

@property (nonatomic) long long originType;

- (long long)realMessageType;
- (id)initWithContentDict:(id)a0;
- (id)initWithContentDict:(id)a0 andOriginalType:(long long)a1;
- (id)supportMessageMenuTypeList;
- (id)displayText;
- (id)contentAttributes;

@end
