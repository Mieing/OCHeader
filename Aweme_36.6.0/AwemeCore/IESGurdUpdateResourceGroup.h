@class IESGurdUpdateResult, NSObject;
@protocol OS_dispatch_group;

@interface IESGurdUpdateResourceGroup : NSObject

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (retain, nonatomic) IESGurdUpdateResult *updateResult;

+ (id)groupWithAccessKey:(id)a0 Completion:(id /* block */)a1;

- (void)leaveWithChannel:(id)a0 version:(unsigned long long)a1 isSuccessful:(BOOL)a2 status:(long long)a3 errorMessage:(id)a4;
- (void).cxx_destruct;
- (void)enter;
- (void)notifyWithBlock:(id /* block */)a0;

@end
