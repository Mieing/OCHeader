@class NSString;

@interface IESLiveResouceBundleHooker : NSObject <IESLiveResouceBundleHookerProtocol>

@property (copy, nonatomic) id /* block */ preHook;
@property (copy, nonatomic) id /* block */ postHook;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPreHook:(id /* block */)a0 postHook:(id /* block */)a1;
- (void).cxx_destruct;

@end
