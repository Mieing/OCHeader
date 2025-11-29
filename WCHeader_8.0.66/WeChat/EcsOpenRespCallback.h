@class NSString, EcsJumpInfo;

@interface EcsOpenRespCallback : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *type;
@property (weak, nonatomic) EcsJumpInfo *jumpInfo;
@property (copy, nonatomic) id /* block */ action;

+ (id)createWithName:(id)a0 type:(id)a1 jumpInfo:(id)a2 action:(id /* block */)a3;

- (void)onComplete:(id)a0;
- (id)createCallbackResp:(int)a0;
- (void)onSuccess:(id)a0;
- (void)onSuccessWithBytes:(id)a0;
- (void)onFailed:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
