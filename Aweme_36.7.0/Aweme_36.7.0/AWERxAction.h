@class AWERxContext;

@interface AWERxAction : NSObject

@property (readonly, nonatomic) long long actionType;
@property (readonly, nonatomic) AWERxContext *context;

+ (id)actionWithType:(long long)a0 context:(id)a1;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 context:(id)a1;

@end
