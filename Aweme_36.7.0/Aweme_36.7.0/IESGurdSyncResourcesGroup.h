@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_group;

@interface IESGurdSyncResourcesGroup : NSObject

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (retain, nonatomic) NSMutableDictionary *statusDictionary;
@property (nonatomic, getter=isSuccessful) BOOL successful;

+ (id)groupWithCompletion:(id /* block */)a0;

- (void)leaveWithChannel:(id)a0 isSuccessful:(BOOL)a1 status:(long long)a2;
- (void).cxx_destruct;
- (void)enter;
- (void)notifyWithBlock:(id /* block */)a0;

@end
