@class NSString;

@interface AWEIMUserMessageHandler : NSObject <AWEUserMessage>

@property (weak, nonatomic) id host;
@property (copy, nonatomic) id /* block */ didFinishLogoutBlock;
@property (copy, nonatomic) id /* block */ didFinishLoginBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void).cxx_destruct;
- (id)initWithHost:(id)a0;
- (void)dealloc;

@end
