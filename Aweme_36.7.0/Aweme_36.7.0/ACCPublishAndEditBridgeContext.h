@interface ACCPublishAndEditBridgeContext : NSObject

@property (copy, nonatomic) id /* block */ saveLocalWillExecuteBlock;
@property (copy, nonatomic) id /* block */ saveLocalCompletionBlock;
@property (nonatomic) long long sharedIndex;
@property (copy, nonatomic) id /* block */ imTaskWillExecuteBlock;
@property (copy, nonatomic) id /* block */ imTaskCompletionBlock;

- (void).cxx_destruct;

@end
