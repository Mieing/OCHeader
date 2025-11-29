@class NSString;

@interface AWEUndertakeFilterLoginCondition : AWEUndertakeFilterBaseCondition <AWEUserMessage>

@property (copy, nonatomic) NSString *theme;
@property (nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (long long)statusWithData:(id)a0 extraInfo:(id)a1;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithTheme:(id)a0;

@end
