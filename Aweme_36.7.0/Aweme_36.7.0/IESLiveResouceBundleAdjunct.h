@class NSString;

@interface IESLiveResouceBundleAdjunct : IESLiveResouceBundle <IESLiveResouceBundleHookerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForKey:(id)a0 type:(id)a1;
- (id /* block */)preHook;

@end
