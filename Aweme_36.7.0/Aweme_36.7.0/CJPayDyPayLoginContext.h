@class CJPayDyYAPProcessLoginConfigModel;

@interface CJPayDyPayLoginContext : NSObject

@property (retain, nonatomic) CJPayDyYAPProcessLoginConfigModel *loginConfigModel;
@property (copy, nonatomic) id /* block */ loginRetryProcessBlock;
@property (copy, nonatomic) id /* block */ loginPushProcessBlock;
@property (copy, nonatomic) id /* block */ loginResultBlock;

- (void).cxx_destruct;

@end
