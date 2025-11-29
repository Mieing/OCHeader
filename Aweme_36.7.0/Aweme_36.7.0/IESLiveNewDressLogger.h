@class NSMutableDictionary, NSString, NSError, NSInvocation;

@interface IESLiveNewDressLogger : NSObject <IESLiveNewDressService>

@property (nonatomic) BOOL invoked;
@property (weak, nonatomic) NSInvocation *invocation;
@property (weak, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prefetchDressResourceWithDressIDs:(id)a0 source:(long long)a1;
- (id)getDressResourceWithDressID:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
