@class NSString;

@interface LSListVMAction : NSObject

@property (readonly, copy, nonatomic) NSString *actionName;
@property (readonly, nonatomic) id param;

+ (id)actionWithName:(id)a0 param:(id)a1;

- (id)initWithActionName:(id)a0 param:(id)a1;
- (void).cxx_destruct;

@end
