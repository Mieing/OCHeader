@interface AWETabbarGeneralButtonAvatarTask : NSObject

@property (nonatomic) long long taskID;
@property (nonatomic) long long status;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (id)createTask;

- (void)showWithResult:(long long)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isValid;
- (void)cancel;
- (id)initWithTaskID:(long long)a0;

@end
