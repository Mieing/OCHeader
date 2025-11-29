@interface MMLivePollingFetchTaskExecuteModel : NSObject

@property (nonatomic) long long cmdID;
@property (nonatomic) BOOL force;
@property (copy, nonatomic) id /* block */ reprocessAction;

- (void).cxx_destruct;

@end
