@class NSString;

@interface CachalotAsyncTask : NSObject

@property (copy, nonatomic) id /* block */ taskImp;
@property (copy, nonatomic) NSString *token;
@property BOOL timeoutFlag;
@property BOOL finishFlag;

- (void).cxx_destruct;

@end
