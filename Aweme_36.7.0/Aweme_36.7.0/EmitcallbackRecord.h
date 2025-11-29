@interface EmitcallbackRecord : NSObject

@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) void *userInfo;

- (void).cxx_destruct;

@end
