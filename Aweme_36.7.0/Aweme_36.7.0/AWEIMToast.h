@class NSString;

@interface AWEIMToast : DUXToast <DUXToastDelegate>

@property (copy, nonatomic) id /* block */ showCompletion;
@property (copy, nonatomic) id /* block */ dismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showText:(id)a0 completion:(id /* block */)a1;
+ (void)showText:(id)a0 dismiss:(id /* block */)a1;

- (void)DUXToastDidShow:(id)a0;
- (void)DUXToastWillRemoved:(id)a0;
- (void).cxx_destruct;

@end
