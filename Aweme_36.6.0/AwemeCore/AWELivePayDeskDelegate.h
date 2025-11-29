@class NSString;

@interface AWELivePayDeskDelegate : NSObject <AWEYAPAPIDelegateProtocol>

@property (copy, nonatomic) id /* block */ openCallback;
@property (copy, nonatomic) id /* block */ payCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callState:(BOOL)a0 fromScene:(long long)a1;
- (void)onResponse:(id)a0;
- (unsigned long long)resultTypeWithErrorCode:(long long)a0;
- (id)initWithOpenCallback:(id /* block */)a0 payCallback:(id /* block */)a1;
- (void).cxx_destruct;

@end
